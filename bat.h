#pragma once

#include "figure.h"

class Bat final : public MovableFigure
{
public:
   Bat() = default;
   Bat(const Vector& position, float height, float width, unsigned color, const Vector& direction, float velocity);
   void move(float dt) override;
};