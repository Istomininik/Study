#pragma once
#include "GeometricFigures.h"
class Ball : public GeometricFigures
{
public:
	Ball(const double radius = 0.0);
	virtual ~Ball();
	virtual const double getVolume() override;
	virtual const double getSurfaceArea() override;
};