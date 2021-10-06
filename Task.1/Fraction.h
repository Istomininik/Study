#pragma once
#include <ostream>

/**
 * @brief Класс дробных чисел.
*/
class Fraction
{
private:

	/**
	 * @brief Целая часть числа
	*/
	long int m_whole;

	/**
	 * @brief Дробная часть числа
	*/
	unsigned short int m_fract;

public:

	/**
	 * @brief Параметризованный конструктор
	 * @param whole Целая часть числа
	 * @param fract Дробная часть числа
	*/
	explicit Fraction(const long int whole, const unsigned short int fract);

	/**
	 * @brief Конструктор копирования
	 * @param other Другое дробное число
	*/
	Fraction(const Fraction& other);

	/**
	 * @brief Конструктор перемещения
	 * @param other
	*/
	Fraction(Fraction&& other) = default;

	/**
	 * @brief Деструктор
	*/
	~Fraction() = default;

	// Перегрузка оператора 
	friend std::ostream& operator<<(std::ostream& os, const Fraction& obj);

	/**
	 * @brief Метод возвращающий целую часть числа
	 * @return Целая часть числа
	*/
	long int get_whole() const;

	/**
	 * @brief Метод возвращающий дробную часть числа
	 * @return Дробная чаасть числа
	*/
	unsigned short get_fract() const;

	/**
	 * @brief Метод изменяющий целую часть числа
	 * @param whole Целая часть числа
	*/
	void set_whole(long int whole);

	/**
	 * @brief Метод изменяющий дробную чась числа
	 * @param fract Дробная часть числа
	*/
	void set_fract(unsigned short int fract);


	/**
	 * @brief Метод вычисляющий количество знаков после запятой и изменения целой и дробной части в соответствии с этим.
	 * @param a Целая чать дробного числа
	 * @param b Дробная часть числа до операции
	 * @param c Дробная часть числа после операции
	 * @return Возвращает объект класса: дробное число.
	*/
	Fraction conversion(long int a, unsigned short int b, unsigned short int c) const; // Данный метод был создан для упрощения программы.


	/**
	 * @brief Сложение двух дробных чисел
	 * @param other Второе дробное число (которое прибавлюят)
	 * @return Дробное число
	*/
	Fraction sum(const Fraction& other) const;

	/**
	 * @brief Разность дробных чисел
	 * @param other Второе дробное число (которое вычитают)
	 * @return Дробное число
	*/
	Fraction sub(const Fraction& other) const;

	/**
	 * @brief Умножение на число
	 * @param a Число на которое умножают
	 * @return Дробное число
	*/
	Fraction mul(int a) const;

	/**
	 * @brief Проверка на равенство двух дробных чисел
	 * @param other Второе дробное число
	 * @return True или False
	*/
	bool is_equal(const Fraction& other) const;

	/**
	 * @brief Определение большего дробного числа
	 * @param other Второе дробное число
	 * @return True - первое больше. False - второе больше.
	*/
	bool is_greater(const Fraction& other) const;
};
