#include"Ball.h"
Ball::Ball(const double radius) 
{
	setRadius(radius);
}

const double Ball::getVolume() { return (4 * M_PI * pow(radius_, 3)) / 3; }
const double Ball::getSurfaceArea() { return 4 * M_PI * pow(radius_, 2); }