#pragma once
#include "GeometricFigures.h"

/**
 * @brief Класс конус
*/
class Cone :public GeometricFigures
{
public:
	
	/**
	 * @brief Параметризованный конструктор
	 * @param radius Радиус основания конуса
	 * @param height Высота конуса
	*/
	Cone(const double radius = 0.0, const double height = 0.0);
	
	/**
	 * @brief Деструктор
	*/
	virtual ~Cone() = default;
	
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