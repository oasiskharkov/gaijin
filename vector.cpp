#include "vector.h"

Vector::Vector(float _x, float _y) :
   x{ _x },
   y{ _y } 
{
}

Vector Vector::operator - (const Vector & v)
{
   return Vector{ this->x - v.x, this->y - v.y };
}

Vector Vector::operator + (const Vector& v)
{
   return Vector{ this->x + v.x, this->y + v.y };
}

Vector Vector::operator * (float scalar)
{
   return Vector{ this->x * scalar, this->y * scalar };
}

Vector Vector::operator - ()
{
   return Vector{ -this->x, -this->y };
}

Vector& Vector::operator = (const Vector& v)
{
   this->x = v.x;
   this->y = v.y;
   return *this;
}

Vector& Vector::operator -= (const Vector& v)
{
   this->x -= v.x;
   this->y -= v.y;
   return *this;
}

Vector& Vector::operator += (const Vector& v)
{
   this->x += v.x;
   this->y += v.y;
   return *this;
}

Vector& Vector::operator *= (float scalar)
{
   this->x *= scalar;
   this->y *= scalar;
   return *this;
}

bool Vector::operator == (const Vector &v)
{
   return this->x == v.x && this->y == v.y;
}

bool Vector::operator != (const Vector &v)
{
   return !(*this == v);
}

float operator ^ (const Vector &v1, const Vector &v2)
{
   return v1.x * v2.x + v1.y * v2.y;
}
