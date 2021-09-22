#include "Triad.h"
#include <iostream>
#include <string>

using namespace std;

Triad::Triad()
{
	first = 0;
	second = 0;
	third = 0;
}

Triad::Triad(int fr, int sc, int th)
{
	first = fr;
	second = sc;
	third = th;
}

string Triad::toString()
{
    cout << "\n Тройка чисел: " << first << "; " << second << "; " << third << endl;
    return string();
}

int Triad::operator1(Triad& Triad)
{
    int a, x;
    a = 1;
    cout << "\n Текущая тройка чисел: " << first << "; " << second << "; " << third << endl;
    while (a != 0)
    {
        cout << "\n Введите какое поле хотите увеличить на 1: первое, введите '1', второе введите '2', третье введите '3', если все три поля, то введите '0'. " << endl;
        cin >> x;
        if (x == 1)
            first = first + 1;
        if (x == 2)
            second = second + 1;
        if (x == 3)
            third = third + 1;
        if(x == 0)
        {
            first = first + 1;
            second = second + 1;
            third = third + 1;
        }
        cout << "\n Новая тройка чисел: " << first << "; " << second << "; " << third << endl;
        cout << "\n Хотите ещё измениять поля? Если да, введите 1, нет, введите 0." << endl;
        cin >> a;
    }
    return 0;
}


Date::Date()
{
<<<<<<< Updated upstream
	first = 01;
	second = 01;
	third = 1900;
=======
	first = 0;
	second = 0;
	third = 0;
>>>>>>> Stashed changes
}

Date::Date(int fr, int sc, int th)
{
	first = fr;
	second = sc;
	third = th;
}


void Date::setDay(int fr)
{
	first = fr;
}

void Date::setMonth(int sc)
{
	second = sc;
}

void Date::setYear(int th)
{
	third = th;
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


int days_in_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };



bool Date::checkDay(Date& date) {
    for (auto i : { 0, 2, 4, 6, 7, 9, 11 }) 
    {
        if (date.getMonth() == i + 1) 
        {
            if (date.getDay() >= 1 && date.getDay() <= days_in_month[i]) 
            {
                return true;
            }
        }
    }
    for (auto i : { 3, 5, 8, 10 }) 
    {
        if (date.getMonth() == i + 1) 
        {
            if (date.getDay() >= 1 && date.getDay() <= days_in_month[i]) 
            {
                return true;
            }
        }
    }
    if (date.getMonth() == 2) 
    {
        if (date.getDay() >= 1 && date.getDay() <= 28) 
        {
            return true;
        }
    }
    return false;
}

bool Date::checkMonth(Date& date)
{
    if (date.getMonth() >= 1 && date.getMonth() <= 12) 
    {
        return true;
    }
    return false;
}

bool Date::checkYear(Date& date)
{ 
    if (date.getYear() >= 0) 
    {
        return true;
    }
    return false;
}

void Date::checkDate(Date& date)
{ 
    if ((checkDay(date) == true) &&
        (checkMonth(date) == true) &&
        (checkYear(date) == true)) 
    {
        cout << "This date is correct!\n";
    }
    else
    {
        cout << "This date is NOT correct!\n";
    }
}


int Date::operator_n(Date& date)
{
    int n;
    if ((checkDay(date) == true) &&
        (checkMonth(date) == true) &&
        (checkYear(date) == true))
    {
        cout << "This date is correct!\n";
        cout << "\n Текущая дата: " << first << "." << second << "." << third << endl;
        cout << "\n Введите количество дней n на которое хотите изменить дату." << endl;
        cin >> n;
        first = first + n;
        while (first > days_in_month[second])
        {
            second = second + 1;
            first = first - days_in_month[second];
            if (second > 12)
            {
                second = 1;
                third = third + 1;
            }
        }
        cout << "\n Новая дата: " << first << "." << second << "." << third << endl;
    }
    else
    {
        cout << "This date is NOT correct!\n";
    }
    return 0;
}
