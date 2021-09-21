#pragma once
#include <string>

/**
 * @brief Класс дробных чисел.
*/
class Fraction
{
private:

	/**
	 * @brief Целая часть дробного числа.
	*/
	signed long int Whole;
	/**
	 * @brief Дробная часть дробного числа.
	*/
	unsigned short int Fract;

public:

	/**
	 * @brief Целая часть дробного числа.
	*/
	signed long int wh;
	/**
	 * @brief Дробная часть дробного числа.
	*/
	unsigned short int fr;


	/**
	 * @brief конструктор по умолчанию.
	*/
	Fraction();
	/**
	 * @brief Параметризованный конструктор.
	 * @param wh Целая часть.
	 * @param fr Дробная часть.
	*/
	Fraction(const signed long int wh, const unsigned short int fr);
	/**
	 * @brief Конструктор копирования.
	 * @param other Другое дробное число.
	*/
	Fraction(const Fraction& other);
	/**
	*	@brief Деструктор.
	*/
	~Fraction() = default;


	/**
	 * @brief Метод, возвращающий целую часть числа.
	 * @return Целая часть числа.
	*/
	signed long int getWhole() const;

	/**
	 * @brief Метод, возвращающий дробную часть числа.
	 * @return Дробная часть числа.
	*/
	unsigned short int getFract() const;


	/**
	 * @brief Метод, возвращающий дробное число.
	 * @return Дробное число в виде строки.
	*/
	std::string toString() const;

	/**
	 * @brief Сравнивает два дробных числа и определяет какое больше, меньше или они равны.
	 * @param other Второе дробное число, с которым сравнивается первое.
	 * @return Пишет какое число из двух больше, либо что они равны. А также большее число.
	*/
	Fraction isGLorE(const Fraction& other);

	/**
	 * @brief Метод сложения с другим дробным числом.
	 * @param other Второе дробное число, которое прибавляют к первому.
	 * @return Дробное число.
	 */
	Fraction add(const Fraction& other);
	/**
	 * @brief Метод вычитания с другим дробным числом.
	 * @param other Второе дробное число, которое вычитается из первого.
	 * @return Дробное число.
	*/
	Fraction sub(const Fraction& other);
	/**
	 * @brief Метод деления с другим дробным числом.
	 * @param other Второе дробное число, на которое делится первое.
	 * @return Дробное число.
	*/
	Fraction div(const Fraction& other);
	/**
	 * @brief Метод умножения с другим дробным числом.
	 * @param other Второе дробное число, на которое умножается первое.
	 * @return Дробное число.
	*/
	Fraction mul(const Fraction& other);
};