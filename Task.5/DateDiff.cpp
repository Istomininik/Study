#include "DateDiff.h"
#include <sstream>
#include <cmath>

using namespace std;

Date::Date()
{
	day = 1;
	month = 1;
	year = 1900;
}

Date::Date(const unsigned int d, const unsigned int m, const unsigned int y)
{
	setDay(d);
	setMonth(m);
	setYear(y);
}

std::string Date::toString() const
{
    stringstream ss;
    ss << day << ". " << month << ". " << year;
    return ss.str();
}

int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int Date::conversion()
{
	int x = month-1;
	int s = 0;
	while (x > 0)
	{
		x--;
		s = s + days_in_month[x];
	}
	s = s + day + year * 365;
	return s;
}

int Date::diff(Date& other)
{
	return abs(conversion() - other.conversion());
}


int Date::getDay() const
{
    return day;
}

int Date::getMonth() const 
{
    return month;
}

int Date::getYear() const 
{
    return year;
}




void Date::setDay(unsigned int d) throw(invalid_argument)
{
	if (d < 1 || d > 31)
	{
		throw(invalid_argument("The day is NOT correct!\n"));
	}
	day = d;
}

void Date::setMonth(unsigned int m) throw(std::invalid_argument)
{
	if (m < 1 || m > 12)
		throw(invalid_argument("The month is NOT correct!\n"));
	if (getDay() < 1 || getDay() > days_in_month[m - 1])
	{
		throw(invalid_argument("The day is NOT correct!\n"));
	}
	month = m;
}

void Date::setYear(unsigned int y) throw(std::invalid_argument)
{
	if (y < 0)
		throw(invalid_argument("The year is NOT correct!\n"));
	year = y;
}
