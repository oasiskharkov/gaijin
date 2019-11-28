#pragma once

#include "figure.h"

class Brick final : public Figure
{
public:
   enum Type {RED = 100, YELLOW = 200, BLUE = 300, GREEN = 400};
   Brick(const Vector& pos, float height, float width, unsigned color, Type type);
   static int points(Type type);
private:
   Type m_type;
};