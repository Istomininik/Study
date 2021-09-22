#pragma once
#include "GeometricFigures.h"
class Cone :public GeometricFigures
{
public:
	Cone(const double radius = 0.0, const double height = 0.0);
	virtual ~Cone();
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};