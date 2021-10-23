#include"Cylinder.h"

Cylinder::Cylinder(const double radius, const double height)
{
	setRadius(radius);
	setHeight(height);
}

const double Cylinder::getSurfaceArea(){return 2 * M_PI * radius_ * height_ + 2 * M_PI * pow(radius_, 2); ;}
const double Cylinder::getVolume(){return M_PI * pow(radius_, 2) * height_;;}
