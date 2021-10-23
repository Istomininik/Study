#include "GeometricFigures.h"
#include <sstream>
#include <string>

using namespace std;

void GeometricFigures::setRadius(const double radius)
{
	if (radius < eps) { throw - 1; }
	radius_ = radius;
}

void GeometricFigures::setHeight(const double height)
{
	if (height < eps) { throw - 1; }
	height_ = height;
}