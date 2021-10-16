#include "Triad.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		Date obj(23, 1, 2003);
		cout << endl << "Текущая дата: " << obj.toString() << endl;
		obj.setMonth(04);
		obj.setDay(30);
		obj.setYear(2004);
		obj.firstPlus();
		obj.secondPlus();
		obj.thirdPlus();
		obj.Plus_n_Days(6);
		cout << endl << "Новая дата: " << obj.toString();
		return 0;
	}
	catch(invalid_argument& z)
	{
		cout << z.what();
	}
}