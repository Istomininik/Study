/* Если на вход программы подать число начинающееся на 0, как в целую так и дробную часть, то оно будет не корректно распознано(будет другое число).
*  Также если число в дробной части имеет нули в последних разрядах, то оно с этими нулямии выведится.
*/

#include "Fraction.h"
#include <string>
#include <cmath>

Fraction::Fraction(const long int whole, const unsigned short fract)
	: m_whole(whole), m_fract(fract)
{
}

Fraction::Fraction(const Fraction& other)
	: Fraction(other.get_whole(), other.get_fract())
{
}

std::ostream& operator<<(std::ostream& os, const Fraction& obj)
{
	return os << obj.m_whole << "." << obj.m_fract;
}

long int Fraction::get_whole() const
{
	return m_whole;
}

unsigned short int Fraction::get_fract() const
{
	return m_fract;
}

void Fraction::set_whole(long int whole)
{
	m_whole = whole;
}

void Fraction::set_fract(unsigned short int fract)
{
	m_fract = fract;
}

/* Метод работает корректно при работе с числами у которых в части после запятой стоит одинаковое количество символов.
   То есть в дролбную часть числа были введены одинаковые по длине числа. 
*/ 
Fraction Fraction::conversion(long int a, unsigned short int b, unsigned short int c) const
{
	std::string temp = std::to_string(b);
	int count_1 = temp.length();
	temp = std::to_string(c);
	int count_2 = temp.length();
	int exp = count_2 - count_1;
	if (exp > 0)
	{
		int v = pow(10, count_2);
		int x = c % v;
		if (a > 0)
			a = a + c / v;
		else a = a - c / v;
		return Fraction(a, x);
	}
	else return Fraction(a, c);
}

Fraction Fraction::sum(const Fraction& other) const
{
	long int whole = m_whole + other.m_whole;
	unsigned short int fract = m_fract + other.m_fract;
	return conversion(whole, m_fract, fract);
}

Fraction Fraction::sub(const Fraction& other) const
{
	long int whole = m_whole - other.m_whole;
	if (m_fract >= other.m_fract)
	{
		unsigned short int fract = m_fract - other.m_fract;
		return conversion(whole, m_fract, fract);
	}
	else
	{
		std::string temp = std::to_string(m_fract);
		int count = temp.length();
		unsigned short int fract = m_fract + pow(10, count);
		fract = fract - other.m_fract;
		whole--;
		return conversion(whole, m_fract, fract);
	}
}

Fraction Fraction::mul(int a) const
{
	long int whole = m_whole * a;
	unsigned short int fract = m_fract * abs(a);
	return conversion(whole, m_fract, fract);
}

bool Fraction::is_equal(const Fraction& other) const
{
	if ((m_whole == other.m_whole) && (m_fract == other.m_fract))
		return true;
	else return false;
}

bool Fraction::is_greater(const Fraction& other) const
{
	if (m_whole > other.m_whole)
		return true;
	if (m_whole == other.m_whole)
		if (m_fract > other.m_fract)
			return true;
	return false;
}