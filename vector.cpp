#include "vector.h"

Vector::Vector(float x, float y) :
   m_x{ x },
   m_y{ y } 
{
}

Vector Vector::operator - (const Vector & v)
{
   return Vector{ m_x - v.m_x, m_y - v.m_y };
}

Vector Vector::operator + (const Vector& v)
{
   return Vector{ m_x + v.m_x, m_y + v.m_y };
}

Vector Vector::operator * (float scalar)
{
   return Vector{ m_x * scalar, m_y * scalar };
}

Vector Vector::operator - ()
{
   return Vector{ -m_x, -m_y };
}

Vector& Vector::operator = (const Vector& v)
{
   m_x = v.m_x;
   m_y = v.m_y;
   return *this;
}

Vector& Vector::operator -= (const Vector& v)
{
   m_x -= v.m_x;
   m_y -= v.m_y;
   return *this;
}

Vector& Vector::operator += (const Vector& v)
{
   m_x += v.m_x;
   m_y += v.m_y;
   return *this;
}

Vector& Vector::operator *= (float scalar)
{
   m_x *= scalar;
   m_y *= scalar;
   return *this;
}

bool Vector::operator == (const Vector &v)
{
   return m_x == v.m_x && m_y == v.m_y;
}

bool Vector::operator != (const Vector &v)
{
   return !(*this == v);
}

float operator * (const Vector &v1, const Vector &v2)
{
   return v1.m_x * v2.m_x + v1.m_y * v2.m_y;
}
