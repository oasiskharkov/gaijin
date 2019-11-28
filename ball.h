#pragma once

#include "figure.h"

class Ball final : public Figure
{
public:
   Ball() = default;
   Ball(const Vector& pos, float height, float width, unsigned color);
   void move(float dt) override;
};