#include "GeometricFigures.h"
#include "Cylinder.h"
#include "Cone.h"
#include "Ball.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	try
	{
		double r, h;
		cout << "Введите радиус и высоту фигуры." << endl;
		cin >> r >> h;
		Cylinder cyl(r, h);
		Cone con(r, h);
		Ball bal(r);
		cout << endl << "Площадь цилиндра: " << cyl.getSurfaceArea() << "; Объём цилиндра: " << cyl.getVolume() << endl;
		cout << endl << "Площадь конуса: " << con.getSurfaceArea() << "; Объём конуса: " << con.getVolume() << endl;
		cout << endl << "Площадь шара: " << bal.getSurfaceArea() << "; Объём шара: " << bal.getVolume() << endl;
	}
	catch(int)
	{
		cout << "Неверный радиус или высота! Оба числа должны быть положительными!" << endl;
	}
}