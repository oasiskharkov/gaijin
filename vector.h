#pragma once

struct Vector
{
   float m_x;
   float m_y;

   explicit Vector(float x = 0.0f, float y = 0.0f);

   Vector operator - (const Vector& v);
   Vector operator + (const Vector& v);
   Vector operator * (float scalar);
   Vector operator - ();

   Vector& operator =  (const Vector &v);
   Vector& operator -= (const Vector &v);
   Vector& operator += (const Vector &v);
   Vector& operator *= (float scalar);

   bool operator == (const Vector &v);
   bool operator != (const Vector &v);
};