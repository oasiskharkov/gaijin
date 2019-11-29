#pragma once

#include "vector.h"

class Figure
{
public:
   Figure() = default;
   Figure(const Vector& position, int height, int width, unsigned color);

   virtual ~Figure() = default;

   void draw(unsigned* field);
      
   Vector position() const;
   void setPosition(const Vector& position);
   
   int width() const;
   void setWidth(int width);

   int height() const;
   void setHeight(int height);

   unsigned color() const;
   void setColor(unsigned color);

private:
   Vector m_position;
   int m_height;
   int m_width;
   unsigned m_color;
};

inline Vector Figure::position() const
{
   return m_position;
}

inline void Figure::setPosition(const Vector& position)
{
   m_position = position;
}

inline int Figure::width() const
{
   return m_width;
}

inline void Figure::setWidth(int width)
{
   m_width = width;
}

inline int Figure::height() const
{
   return m_height;
}

inline void Figure::setHeight(int height)
{
   m_height = height;
}

inline unsigned Figure::color() const
{
   return m_color;
}

inline void Figure::setColor(unsigned color)
{
   m_color = color;
}

class MovableFigure : public Figure
{
public:
   MovableFigure(const Vector& position, int height, int width, unsigned color, const Vector& velocity);
   virtual void move(float dt) = 0;

   Vector velocity() const;
   void setVelocity(const Vector& velocity);
private:
   Vector m_velocity;
};

inline Vector MovableFigure::velocity() const
{
   return m_velocity;
}

inline void MovableFigure::setVelocity(const Vector& velocity)
{
   m_velocity = velocity;
}