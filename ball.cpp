#include "ball.h"

Ball::Ball(const Vector& position, float height, float width, unsigned color, const Vector& direction, float velocity) :
   MovableFigure{position, height, width, color, direction, velocity}
{

}

void Ball::move(float dt)
{

}
