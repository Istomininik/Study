#include"Cylinder.h"

Cylinder::Cylinder(const double radius, const double height)
{
	radius_ = radius;
	height_ = height;
}

Cylinder::~Cylinder(){}
const double Cylinder::getVolume(){return 2 * M_PI * radius_ * height_ + 2 * M_PI * pow(radius_, 2); ;}
const double Cylinder::getSurfaceArea(){return M_PI * pow(radius_, 2) * height_;;}
