#pragma once

#include "vector.h"

class Figure
{
public:
   Figure() = default;
   Figure(const Vector& pos, float height, float width, unsigned color);

   virtual void draw();
   virtual void move(float dt) = 0;
   
   Vector position() const;
   void setPosition(const Vector& vec);
   
   float width() const;
   void setWidth(float width);

   float height() const;
   void setHeight(float height);
private:
   Vector m_pos;
   float m_height;
   float m_width;
   unsigned m_color;
};