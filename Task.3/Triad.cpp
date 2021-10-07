#include "Triad.h"
#include <sstream>
#include <string>

using namespace std;

Triad::Triad()
{
    this->first = 0;
    this->second = 0;
    this->third = 0;
}

Triad::Triad(int fr, int sc, int th)
{
    this->first = fr;
    this->second = sc;
    this->third = th;
}

string Triad::toString()
{
    stringstream ss;
    ss << first << ". " << second << ". " << third;
    string str = ss.str();
    return string(str);
}


void Triad::firstPlus()
{
    first++;
}

void Triad::secondPlus()
{
    second++;
}

void Triad::thirdPlus()
{
    third++;
}


Date::Date()
{
    first = 0;
    second = 0;
    third = 0;
}

Date::Date(int fr, int sc, int th)
{
    first = fr;
    second = sc;
    third = th;
}

int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


void Date::setDay(int fr, bool a, Date& date) throw(std::invalid_argument)
{
    first = fr;
    if (a)
    {
        int x = days_in_month[second - 1];
        if (date.getDay() < 1 || date.getDay() > x)
        {
            throw(invalid_argument("The day is NOT correct!\n"));
        }
    }
}

void Date::setMonth(int sc, Date& date) throw(std::invalid_argument)
{
    if (sc >= 1 && sc <= 12)
    {
        second = sc;
    }
    else
        throw(invalid_argument("The month is NOT correct!\n"));
    int x = days_in_month[second-1];
    if (date.getDay() < 1 || date.getDay() > x)
    {
        throw(invalid_argument("The day is NOT correct!\n"));
    }
}

void Date::setYear(int th) throw(std::invalid_argument)
{
    if (th >= 0)
    {
        third = th;
    }
    else
        throw(invalid_argument("The year is NOT correct!\n"));
}

int Date::getDay()
{
    return first;
}

int Date::getMonth()
{
    return second;
}

int Date::getYear()
{
    return third;
}

void Date::firstPlus()
{
    first++;
    if (first > days_in_month[second])
    {
        first = 1;
        second++;
        if (second > 12)
            second = second - 12;
    }
}

void Date::secondPlus() throw(std::invalid_argument)
{
    second++;
    if (second > 12)
        second = second - 12;
    int x = days_in_month[second - 1];
    if (first < 1 || first > x)
    {
        throw(invalid_argument("The day is NOT correct!\n"));
    }
}

void Date::thirdPlus()
{
    third++;
}

Date Date::Plus_n_Days(int n)
{
    first = first + n;
    while (first > days_in_month[second-1])
    {
        second = second + 1;
        first = first - days_in_month[second-1];
        if (second > 12)
        {
            second = 1;
            third = third + 1;
        }
    }
    if (first == 0)
        first++;
    return Date(first, second, third);
}