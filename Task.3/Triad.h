#pragma once
#include <string>

class Triad
{
protected:

	int first;
	int second;
	int third;

public:

	int fr;
	int sc;
	int th;
	
	Triad();

	Triad(int fr, int sc, int th);

	std::string toString();

	int operator1(Triad& Triad);
};

class Date : virtual public Triad
{
public:
	Date();

	Date(int fr, int sc, int th);

	
	void setDay(int fr);

	void setMonth(int sc);

	void setYear(int th);

	int getDay();

	int getMonth();

	int getYear();


	bool checkDay(Date& date);

	bool checkMonth(Date& date);

	bool checkYear(Date& date);

	void checkDate(Date& date);


	int operator_n(Date& date);
};