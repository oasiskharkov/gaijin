#pragma once

struct Vector
{
   float x;
   float y;

   explicit Vector(float _x = 0.0f, float _y = 0.0f);

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