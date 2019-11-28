#include "brick.h"

Brick::Brick(const Vector & pos, float height, float width, unsigned color, Type type) :
   Figure{pos, height, width, color},
   m_type{type}
{
}

int Brick::points(Type type)
{
   return static_cast<int>(type);
}
