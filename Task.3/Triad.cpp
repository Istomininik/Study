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

Triad::Triad(const int fr, const int sc, const int th)
{
    this->first = fr;
    this->second = sc;
    this->third = th;
}

string Triad::toString()
{
    stringstream ss;
    ss << first << ". " << second << ". " << third;
    return  ss.str();
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
    setDay(fr);
    setMonth(sc);
    setYear(th);
}
    
int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };


void Date::setDay(int fr) throw(std::invalid_argument)
{
    int x = days_in_month[second - 1];
    if (fr < 1 || fr > x)
    {
        throw(invalid_argument("The day is NOT correct!\n"));
    }
    first = fr;
}

void Date::setMonth(int sc) throw(std::invalid_argument)
{
    if (sc < 1 && sc > 12)
        throw(invalid_argument("The month is NOT correct!\n"));
    int x = days_in_month[sc-1];
    if (getDay() < 1 || getDay() > x)
    {
        throw(invalid_argument("The day is NOT correct!\n"));
    }
    second = sc;
}

void Date::setYear(int th) throw(std::invalid_argument)
{
    if (th < 0)
        throw(invalid_argument("The year is NOT correct!\n"));
    third = th;
}

int Date::getDay() const
{
    return first;
}

int Date::getMonth() const 
{
    return second;
}

int Date::getYear() const 
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

Date Date::Plus_n_Days(const int n)
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