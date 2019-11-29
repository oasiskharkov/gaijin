#pragma once

#include "figure.h"

class Ball final : public MovableFigure
{
public:
   Ball() = default;
   Ball(const Vector& position, int height, int width, unsigned color, const Vector& velocity);
   void move(float dt) override;
};