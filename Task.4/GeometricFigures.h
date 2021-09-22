#pragma once
#define _USE_MATH_DEFINES
#include <cmath>
class GeometricFigures
{
public:
	virtual const double getVolume() = 0;
	virtual const double getSurfaceArea() = 0;
protected:
	virtual ~GeometricFigures();
	const double eps = 0.0000001;
	double radius_, height_;
	void setRadius(const double radius);
	void setHeight(const double height);
};