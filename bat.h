#pragma once

#include "figure.h"

class Bat final : public Figure
{
public:
   Bat() = default;
   Bat(const Vector& pos, float height, float width, unsigned color);
   void move(float dt) override;
};