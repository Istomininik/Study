#include "Fraction.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;

Fraction::Fraction()
	:Whole(0), Fract(0) {}


Fraction::Fraction(signed long int wh, unsigned short int fr)
{
	Whole=wh;
	Fract=fr;
}

Fraction::Fraction(const Fraction& other)
{
	
}


signed long int Fraction::getWhole() const
{
	cout << "\n Целая часть числа: " << wh << endl;
	return wh;
}

unsigned short int Fraction::getFract() const
{
	cout << "\n Дробная часть числа: " << fr << endl;
	return fr;
}

std::string Fraction::toString() const
{
	cout << "\n Число: " << Whole << "." << Fract << endl;
	return std::string();
}
Fraction Fraction::isGLorE(const Fraction& other)
{
	signed long int wl(Whole);
	unsigned short int ft(Fract);
	if (Whole > other.Whole)
	{
		cout << "Первое число больше второго." << endl;
		wl = Whole;
		ft = Fract;
	}
	else
	{
		if (Whole < other.Whole)
		{
			cout << "Второе число больше." << endl;
			wl = other.Whole;
			ft = other.Fract;
		}
		else
		{
			if (Whole = other.Whole)
			{
				if (Fract > other.Fract)
				{
					cout << "Первое число больше." << endl;
					wl = Whole;
					ft = Fract;
				}
				else
				{
					if (Fract < other.Fract)
					{
						cout << "Второе число больше." << endl;
						wl = other.Whole;
						ft = other.Fract;
					}
					else
					{
						cout << "Числа равны." << endl;
						wl = Whole;
						ft = Fract;
					}
				}
			}
		}
	}
	return Fraction::Fraction(wl, ft);
}

Fraction Fraction::add(const Fraction& other)
{
	signed long int wl(Whole);
	unsigned short int ft(Fract);
	unsigned long int x, x1, y, y1;
	int n = 1, m = 1, z = 0, k, s;
	x = Fract;
	x1 = Fract;
	y = other.Fract;
	y1 = other.Fract;
	wl = Whole + other.Whole;
	while ((x /= 10) > 0) n++;
	while ((y /= 10) > 0) m++;
	if (n = m)
	{
		s = Fract + other.Fract;
		while (s > 10 ^ n)
		{
			s = s - 10 ^ n;
			z++;
		}
		ft = s;
	}
	else
	{
		if (n < m)
		{
			k = m - n;
			x1 = x1 * 10 ^ k;
		}
		else
		{
			k = n - m;
			y1 = y1 * 10 ^ k;
		}
		ft = x1 + y1;
		while (ft > 10 ^ max(n,m))
		{
			ft = ft - 10 ^ max(n, m);
			z++;
		}
	}
	if (z != 0)
	{
		wl = wl + z;
	}
	return Fraction::Fraction(wl, ft);
}
Fraction Fraction::sub(const Fraction& other)
{
	signed long int wl(Whole);
	unsigned short int ft(Fract);
	unsigned short int x, x1, y, y1;
	int n = 1, m = 1, z = 0, k, s;
	x = Fract;
	x1 = Fract;
	y = other.Fract;
	y1 = other.Fract;
	while ((x /= 10) > 0) n++;
	while ((y /= 10) > 0) m++;
	if (n < m)
	{
		k = m - n;
		x1 = x1 * 10 ^ k;
	}
	else
	{
		k = n - m;
		y1 = y1 * 10 ^ k;
	}
	if (Whole >= other.Whole)
	{
		if (x1 >= y1)
		{
			wl = Whole - other.Whole;
			ft = x1 - y1;
		}
		else 
		{
			wl = Whole - other.Whole;
			if (wl = 0)
			{
				ft = y1 - x1;
				string wl = "-0";
			}
			else
			{
				wl = wl - 1;
				ft = 10 ^ n - (y1 - x1);
			}
		}
	}
	else
	{
		if (x1 <= y1)
		{
			wl = Whole - other.Whole;
			ft = y1 - x1;
		}
		else
		{
			wl = other.Whole - Whole - 1;
			ft = 10 ^ n - (x1 - y1);
			if (wl = 0)
			{
				string wl = "-0";
			}
		}
	}
	return Fraction::Fraction(wl, ft);
}
Fraction Fraction::div(const Fraction& other)
{
	signed long int wl(Whole);
	unsigned short int ft(Fract);
	unsigned short int x, x1, y, y1;
	int n = 1, m = 1, z = 0, k, s;
	x = Fract;
	x1 = Fract;
	y = other.Fract;
	y1 = other.Fract;
	while ((x /= 10) > 0) n++;
	while ((y /= 10) > 0) m++;

	return Fraction::Fraction(wl, ft);
}

Fraction Fraction::mul(const Fraction& other)
{
	signed long int wl(Whole);
	unsigned short int ft(Fract);
	unsigned short int x, x1, y, y1;
	int n = 1, m = 1, z = 0, k, s;
	x = Fract;
	x1 = Fract;
	y = other.Fract;
	y1 = other.Fract;
	while ((x /= 10) > 0) n++;
	while ((y /= 10) > 0) m++;

	return Fraction::Fraction(wl, ft);
}