#include "Triad.h"
#include <iostream>

using namespace std;

int main() 
{
	setlocale(LC_ALL, "Russian");
	Date obj(23, 01, 2003);
	obj.setDay(30);
	obj.setMonth(04);
	obj.setYear(2003);
	obj.operator1(obj);
	obj.operator_n(obj);
	obj.checkDay(obj);
	obj.checkMonth(obj);
	obj.checkYear(obj);
	obj.checkDate(obj);
	obj.toString();
	return 0;
}