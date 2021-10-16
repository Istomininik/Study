#pragma once
#include <string>

/* В данном решении поставленной задачи все годы имеют одинаковое количество дней.
* Т.е. во всех годах 365 дней. */

/**
 * @brief Класс дата.
*/
class Date
{
protected:

	/**
	 * @brief День.
	*/
	int day;

	/**
	 * @brief Месяц.
	*/
	int month;

	/**
	 * @brief Год.
	*/
	int year;

public:
	
	/**
	 * @brief Конструктор по умолчанию.
	*/
	Date();

	/**
	 * @brief Параметризованный кончтруктор.
	 * @param d День.
	 * @param m Месяц.
	 * @param y Год.
	*/
	Date(const unsigned int d, const unsigned int m, const unsigned int y);

	/**
	 * @brief Метод вывода даты в виде строки.
	 * @return Дата.
	*/
	std::string toString() const;

	/**
	 * @brief Метод перевода даты в дни.
	 * @return Количество дней.
	*/
	int conversion();

	/**
	 * @brief Метод, вычисляющий разницу между датами в днях.
	 * @param other Вторая дата.
	 * @return Количесво дней.
	*/
	int diff(Date& other);


	/**
	 * @brief Метод, возвращающий день.
	 * @return День.
	*/
	int getDay() const;

	/**
	 * @brief Метод, возвращяющий месяц.
	 * @return Месяц.
	*/
	int getMonth() const;

	/**
	 * @brief Метод, возвращающий год.
	 * @return Год.
	*/
	int getYear() const;


	/**
	 * @brief Метод изменения дня.
	 * @param d День, на который изменить.
	*/
	void setDay(unsigned int d);

	/**
	 * @brief Метод изменения месяца.
	 * @param m Месяц, на который изменить.
	*/
	void setMonth(unsigned int m);

	/**
	 * @brief Метод для изменения года.
	 * @param y Год, на который изменить.
	*/
	void setYear(unsigned int y);

};