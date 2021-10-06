#include <iostream>
#include "Fraction.h"

int main()
{
	Fraction test1(4, 6111);
	Fraction test2(2, 8111);
	Fraction sum = test1.sum(test2);
	Fraction sub = test1.sub(test2);
	Fraction mul = test2.mul(2);
	std::cout << std::endl << sum;
	std::cout << std::endl << sub;
	std::cout << std::endl << mul << std::endl;
	if (test1.is_equal(test2))
		std::cout << std::endl << "Equal";
	else {
		if (test1.is_greater(test2))
			std::cout << std::endl << "First is greater" << std::endl;
		else
			std::cout << std::endl << "Second is greater" << std::endl;
	}
	system("pause");
	return 0;
}