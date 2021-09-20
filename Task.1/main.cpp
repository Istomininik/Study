#include "Fraction.h"
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	Fraction a;
	a.wh = 5;
	a.fr = 3;
	a.getWhole();
	a.getFract();
}