#pragma once

#include "vector.h"

class Figure
{
public:
   Figure() = default;
   Figure(const Vector& position, float height, float width, unsigned color);

   virtual ~Figure() = default;

   void draw(unsigned* field);
      
   Vector position() const;
   void setPosition(const Vector& position);
   
   float width() const;
   void setWidth(float width);

   float height() const;
   void setHeight(float height);

   unsigned color() const;
   void setColor(unsigned color);

private:
   Vector m_position;
   float m_height;
   float m_width;
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

inline float Figure::width() const
{
   return m_width;
}

inline void Figure::setWidth(float width)
{
   m_width = width;
}

inline float Figure::height() const
{
   return m_height;
}

inline void Figure::setHeight(float height)
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
   MovableFigure(const Vector& position, float height, float width, unsigned color, const Vector& direction, float velocity = 0.0f);
   virtual void move(float dt) = 0;

   Vector direction() const;
   void setDirection(const Vector& direction);

   float velocity() const;
   void setVelocity(float velocity);
private:
   Vector m_direction;
   float m_velocity;
};

inline Vector MovableFigure::direction() const
{
   return m_direction;
}

inline void MovableFigure::setDirection(const Vector& direction)
{
   m_direction = direction;
}

inline float MovableFigure::velocity() const
{
   return m_velocity;
}

inline void MovableFigure::setVelocity(float velocity)
{
   m_velocity = velocity;
}