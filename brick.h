#pragma once

#include "figure.h"

class Brick final : public Figure
{
public:
   enum Type {Red = 100, Yellow = 200, Blue = 300, Green = 400};
   Brick();
   Brick(const Vector& pos, float height, float width, unsigned color, Type type);
   void move(float dt) override;
   static int points(Type type);
private:
   Type m_type;
};