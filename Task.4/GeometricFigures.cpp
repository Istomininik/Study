#include "GeometricFigures.h"

void GeometricFigures::setRadius(const double radius)
{
	if (radius < eps) { throw - 1; }
	else radius_ = radius;
}

void GeometricFigures::setHeight(const double height)
{
	if (height < eps) { throw - 1; }
	else height_ = height;
}