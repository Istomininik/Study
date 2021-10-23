#include"Cone.h"

Cone::Cone(const double radius, const double height)
{
	setRadius(radius);
	setHeight(height);
}

const double Cone::getVolume() { return (M_PI * pow(radius_, 2) * height_) / 3; }
const double Cone::getSurfaceArea() { return M_PI * radius_ * (radius_ + sqrt(pow(radius_, 2) + pow(height_, 2))); }