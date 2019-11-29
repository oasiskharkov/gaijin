#include "figure.h"

Figure::Figure(const Vector& position, int height, int width, unsigned color) :
   m_position{ position },
   m_height{ height },
   m_width{ width },
   m_color{ color }
{
}

void Figure::draw(unsigned* field)
{
   int x = static_cast<int>(m_position.m_x);
   int y = static_cast<int>(m_position.m_y);
   for(int i = x; i < x + m_width; ++i)
   {
      for (int j = y; j < y + m_height; ++j)
      {
         field[i * m_width + j] = m_color;
      }
   }
}

MovableFigure::MovableFigure(const Vector& position, int height, int width, unsigned color, const Vector& velocity) :
   Figure{ position, height, width, color },
   m_velocity{ velocity }
{
}