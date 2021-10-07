#pragma once
#include <string>

/* В данном решении поставленной задачи все годы имеют одинаковое количество дней.
* Т.е. во всех годах 365 дней. */

/**
 * @brief Класс дата.
*/
class Date
{
private:

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
	Date(int d, int m, int y);

	/**
	 * @brief Метод вывода даты в виде строки.
	 * @return Дата.
	*/
	std::string toString() const;

	/**
	 * @brief Метод, вычисляющий разницу в днях между датами.
	 * @param other Вторая дата.
	 * @return Количесво дней.
	*/
	int Dif(const Date& other);


	/**
	 * @brief Метод, возвращающий день.
	 * @return День.
	*/
	int getDay();

	/**
	 * @brief Метод, возвращяющий месяц.
	 * @return Месяц.
	*/
	int getMonth();

	/**
	 * @brief Метод, возвращающий год.
	 * @return Год.
	*/
	int getYear();


	/**
	 * @brief Метод изменения дня.
	 * @param d День, на который изменить.
	 * @param date Вся дата.
	*/
	void setDay(int d,Date& date);

	/**
	 * @brief Метод изменения месяца.
	 * @param m Месяц, на который изменить.
	 * @param date Вся дата.
	*/
	void setMonth(int m, Date& date);

	/**
	 * @brief Метод для изменения года.
	 * @param y Год, на который изменить.
	*/
	void setYear(int y);
};