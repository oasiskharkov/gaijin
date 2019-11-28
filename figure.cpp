#include "figure.h"

Figure::Figure(const Vector& position, float height, float width, unsigned color) :
   m_position{ position },
   m_height{ height },
   m_width{ width },
   m_color{ color }
{
}

void Figure::draw(unsigned* field)
{

}

MovableFigure::MovableFigure(const Vector& position, float height, float width, unsigned color, const Vector& direction, float velocity) :
   Figure{ position, height, width, color },
   m_direction{ direction },
   m_velocity{ velocity }
{
}