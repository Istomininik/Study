#include"Ball.h"
Ball::Ball(const double radius = 0.0) { radius_ = radius; }
Ball::~Ball() {}
const double Ball::getVolume() { return (4 * M_PI * pow(radius_, 3)) / 3; }
const double Ball::getSurfaceArea() { return 4 * M_PI * pow(radius_, 2); }