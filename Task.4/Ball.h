#pragma once
#include "GeometricFigures.h"

/**
 * @brief Класс шар
*/
class Ball : public GeometricFigures
{
public:
	
	/**
	 * @brief Параметризованный конструктор
	 * @param radius Радиус шара
	*/
	Ball(const double radius = 0.0);
	
	/**
	 * @brief Деструктор
	*/
	virtual ~Ball() = default;
	
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