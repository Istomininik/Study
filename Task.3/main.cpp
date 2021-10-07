#include "Triad.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		bool a;
		Date obj(23, 1, 2003);
		cout << endl << "Текущая дата: " << obj.toString() << endl;
		cout << endl << "Вы хотите изменить только день? (Да - 1, нет - 0)" << endl;
		cin >> a;
		obj.setDay(30, a, obj);
		if (a == 0)
		{
			obj.setMonth(04, obj);
			obj.setYear(2004);
			obj.firstPlus();
			obj.secondPlus();
			obj.thirdPlus();
			obj.Plus_n_Days(1);
		}
		cout << endl << "Новая дата: " << obj.toString();
		return 0;
	}
	catch(invalid_argument& z)
	{
		cout << z.what();
	}
}