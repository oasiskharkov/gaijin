#pragma once

#include "figure.h"

class Bat final : public MovableFigure
{
public:
   Bat() = default;
   Bat(const Vector& position, int height, int width, unsigned color, const Vector& velocity);
   void move(float dt) override;
};