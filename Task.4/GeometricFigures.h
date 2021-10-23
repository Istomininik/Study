#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
#include <string>

/**
 * @brief Кдасс геометрических фигур
*/
class GeometricFigures
{
public:
	
	/**
	 * @brief Метод, возвпащающий объём фигуры
	 * @return Объём фигуры
	*/
	virtual const double getVolume() = 0;

	/**
	 * @brief Метод, возвращающий площадь фигуры
	 * @return Площадь фигуры
	*/
	virtual const double getSurfaceArea() = 0;

	/**
	 * @brief Деструктор
	*/
	virtual ~GeometricFigures() = default;

	/**
	 * @brief Сеттер радиуса
	 * @param radius радиус фигуры (основания)
	*/
	void setRadius(const double radius);

	/**
	 * @brief Сеттер высоты
	 * @param height Высота фигуры
	*/
	void setHeight(const double height);

protected:

	/**
	 * @brief Минимальное, недопустимое, значение
	*/
	const double eps = 0.0000001;

	/**
	 * @brief Радиус и высота
	*/
	double radius_, height_;
};