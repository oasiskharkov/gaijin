#include "brick.h"

Brick::Brick(const Vector & pos, int height, int width, unsigned color, Type type) :
   Figure{pos, height, width, color},
   m_type{type}
{
}

int Brick::points(Type type)
{
   return static_cast<int>(type);
}
