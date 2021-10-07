#include "DateDiff.h"
#include <sstream>
#include <string>
#include <math.h>

using namespace std;

Date::Date()
{
	day = 01;
	month = 01;
	year = 1900;
}

Date::Date(int d, int m, int y)
{
	day = d;
	month = m;
	year = y;
}

std::string Date::toString() const
{
    stringstream ss;
    ss << day << ". " << month << ". " << year;
    string str = ss.str();
    return string(str);
}

int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int Date::Dif(const Date& other)
{
	int x, y, s, p, k;
	x = month;
	y = other.month;
	s = 0;
	p = 0;
	x = x - 1;
	while (x > 0)
	{
		s = s + days_in_month[x-1];
		x--;
	}
	s = s + day + year * 365;
	y = y - 1;
	while (y > 0)
	{
		p = p + days_in_month[y-1];
		y--;
	}
	p = p + other.day + other.year * 365;
	k = s - p;
	if (k < 0)
	{
		k = abs(k);
	}
	return k;
}

int Date::getDay()
{
    return day;
}

int Date::getMonth()
{
    return month;
}

int Date::getYear()
{
    return year;
}


void Date::setDay(int d, Date& date)
{
	day = d;
}

void Date::setMonth(int m, Date& date) throw(std::invalid_argument)
{
	if (m >= 1 && m <= 12)
	{
		month = m;
	}
	else
		throw(invalid_argument("The month is NOT correct!\n"));
	int x = days_in_month[month-1];
	if (date.getDay() < 1 || date.getDay() > x)
	{
		throw(invalid_argument("The day is NOT correct!\n"));
	}
}

void Date::setYear(int y) throw(std::invalid_argument)
{
	if (y >= 0)
	{
		year = y;
	}
	else
		throw(invalid_argument("The year is NOT correct!\n"));
}
