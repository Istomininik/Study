#pragma once
#include "GeometricFigures.h"
class Cylinder :public GeometricFigures
{
public:
	Cylinder(const double radius = 0.0, const double height = 0.0);
	~Cylinder();
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};
