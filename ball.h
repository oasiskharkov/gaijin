#pragma once

#include "figure.h"

class Ball final : public MovableFigure
{
public:
   Ball() = default;
   Ball(const Vector& position, float height, float width, unsigned color, const Vector& direction, float velocity);
   void move(float dt) override;
};