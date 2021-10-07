#pragma once
#include <string>

/**
 * @brief Класс тройка чисел.
*/
class Triad
{
protected:

	/**
	 * @brief Первое число.
	*/
	int first;

	/**
	 * @brief Второе число.
	*/
	int second;

	/**
	 * @brief Третье число.
	*/
	int third;

public:

	/**
	 * @brief Конструктор по умолчанию.
	*/
	Triad();

	/**
	 * @brief Параметризованный конструктор.
	 * @param fr Первое число.
	 * @param sc Второе число.
	 * @param th Третье число.
	*/
	Triad(int fr, int sc, int th);

	/**
	 * @brief Деструктор.
	*/
	~Triad() = default;

	/**
	 * @brief Метод вывода тройки чисел в виде строки.
	 * @return Строка: тройка чисел.
	*/
	std::string toString();


	/**
	 * @brief Метод увеличивающий первое число на 1.
	*/
	void firstPlus();

	/**
	 * @brief Метод увеличивающий второе число на 1.
	*/
	void secondPlus();

	/**
	 * @brief Метод увелисивающий третье число на 1.
	*/
	void thirdPlus();
};

/**
 * @brief Дочерний класс дата.
*/
class Date : virtual public Triad
{
public:

	/**
	 * @brief Конструктор по умолчанию.
	*/
	Date();

	/**
	 * @brief Параметризованный конструктор.
	 * @param fr День (первое число).
	 * @param sc Месяц (второе число).
	 * @param th Год (третье число).
	*/
	Date(int fr, int sc, int th);

	/**
	 * @brief Деструктор.
	*/
	~Date() = default;


	/**
	 * @brief Метод изменения дня.
	 * @param fr День, на который изменить.
	 * @param a Да или нет (1 или 0).
	 * @param date Вся дата.
	*/
	void setDay(int fr, bool a, Date& date);	// Переменна "a" нужна для проврки дня на корректность, если будет изменяться только день в дате.

	/**
	 * @brief Метод изменения месяца.
	 * @param sc Месяц, на который изменить.
	 * @param date Вся дата.
	*/
	void setMonth(int sc, Date& date);

	/**
	 * @brief Метод для изменения года.
	 * @param th Год, на который изменить.
	*/
	void setYear(int th);

	/**
	 * @brief Метод, возвращающий день.
	 * @return День.
	*/
	int getDay();

	/**
	 * @brief Метод, возвращающий месяц.
	 * @return Месяц.
	*/
	int getMonth();

	/**
	 * @brief Метод, возвоащающий год.
	 * @return Год.
	*/
	int getYear();


	/**
	 * @brief Метод, увеличивающий день на 1.
	*/
	void firstPlus();

	/**
	 * @brief Метод, увеличивающий месяц на 1.
	*/
	void secondPlus();

	/**
	 * @brief Метод увеличивающий год на 1.
	*/
	void thirdPlus();


	/**
	 * @brief Метод увеличения даты на "n" дней.
	 * @param n Количество дней на которое изменить дату.
	 * @return Дата.
	*/
	Date Plus_n_Days(int n);
};