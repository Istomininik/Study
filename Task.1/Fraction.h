#pragma once
#include <string>

/**
 * @brief Класс дробных чисел.
*/
class Fraction
{
public:
	/**
	 * @brief Конструктор по умолчанию.
	*/
	Fraction();
	/**
	 * @brief Параметризованный конструктор.
	 * @param whole Целая часть.
	 * @param fract Дробная часть.
	*/
	Fraction(const int whole, const int fract);
	/**
	 * @brief Конструктор копирования.
	 * @param other Другое дробное число.
	*/
	Fraction(const Fraction& other);
	/**
	*	@brief Деструктор.
	*/
	~Fraction();
	
	/**
	 * @brief Метод, возвращающий целую часть числа.
	 * @return Целая часть числа.
	*/
	signed long int GetWhole() const;
	/**
	 * @brief Метод, возвращающий дробную часть числа.
	 * @return Дробная часть числа.
	*/
	unsigned short int GetFract() const;

	/**
	 * @brief Метод, возвращающий дробное число.
	 * @return Дробное число в виде строки.
	*/
	std::string GetView() const;
	
	/**
	 * @brief Сравниние два дробных числа и определяет какое больше и меньше.
	 * @param other Сравниваемое дробное число.
	 * @return true, если число больше.
	*/
	bool AreGreater(const Fraction& other) const;
	/**
	 * @brief Метод, возвращающий большее число.
	 * @return Дробное число.
	*/
	Fraction& GetGreater() const;
	/**
	 * @brief Метод, возвращающий меньшее число.
	 * @return Дробное число.
	*/
	Fraction& GetLess() const;
	
	/**
	 * @brief Сравнение на равенство дробных чисел.
	 * @param other Сравниваемое дробное число.
	 * @return true, если равны.
	*/
	bool AreEqual(const Fraction& other) const;
	/**
	 * @brief Метод, возвращающий равное дробное число.
	 * @return Дробное число.
	*/
	Fraction& GetEqual() const;

	/**
	 * @brief Метод сложения с другим дробным числом.
	 * @param other Второе дробное число.
	 * @return Дробное число.
	*/
	Fraction& Add(const Fraction& other) const;
	/**
	 * @brief Метод вычитания с другим дробным числом.
	 * @param other Второе дробное число.
	 * @return Дробное число.
	*/
	Fraction& Sub(const Fraction& other) const;
	/**
	 * @brief Метод деления с другим дробным числом.
	 * @param other Второе дробное число.
	 * @return Дробное число.
	*/
	Fraction& Div(const Fraction& other) const;
	/**
	 * @brief Метод умножения с другим дробным числом.
	 * @param other Второе дробное число.
	 * @return Дробное число.
	*/
	Fraction& Mul(const Fraction& other) const;

private:
	/**
	 * @brief Целая часть дробного числа.
	*/
	signed long int Whole;
	/**
	 * @brief Дробная часть дробного числа.
	*/
	unsigned short int Fract;
};