#pragma once

#include <memory>
#include <vector>
#include <array>

#include "ball.h"
#include "bat.h"
#include "brick.h"

static const unsigned SIZE = 640 * 480;

class Field
{
public:
   Field() = default;
   Field(unsigned color);
private:
   std::array<unsigned, SIZE> m_field;
   std::unique_ptr<Bat> m_bit;
   std::unique_ptr<Ball> m_ball;
   std::vector <std::unique_ptr<Brick>> m_bricks;
};