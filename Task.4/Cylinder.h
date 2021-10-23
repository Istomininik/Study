#pragma once
#include "GeometricFigures.h"

/**
 * @brief Класс цилиндр
*/
class Cylinder :public GeometricFigures
{
public:

	/**
	 * @brief Параметризованный конструктор
	 * @param radius Радиус основания
	 * @param height Высота цилиндра
	*/
	Cylinder(const double radius = 0.0, const double height = 0.0);
	
	/**
	* @brief Деструктор
	*/
	~Cylinder() = default;

	/**
	 * @brief Нахождение объёма фигуры
	 * @return Объём фигуры
	*/
	virtual const double getVolume() override;

	/**
	 * @brief Нахождение площади фигуры
	 * @return Площадь фигуры
	*/
	virtual const double getSurfaceArea() override;
};
