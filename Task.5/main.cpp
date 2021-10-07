#include "DateDiff.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	try
	{
		int x, y, z;

		Date a(1, 1, 1111);
		Date a1(2, 2, 2222);
		cout << "Введите день месяц и год первой даты." << endl;
		cin >> x >> y >> z;
		a.setDay(x, a);
		a.setMonth(y, a);
		a.setYear(z);
		cout << "Введите день месяц и год второй даты." << endl;
		cin >> x >> y >> z;
		a1.setDay(x, a1);
		a1.setMonth(y, a1);
		a1.setYear(z);
		cout << "Разница между датами: " << a.toString() << " и " << a1.toString() << " равна в днях: " << a.Dif(a1) << endl;
	}
	catch (invalid_argument& b)
	{
		cout << b.what();
	}
	system("pause");
	return 0;
}