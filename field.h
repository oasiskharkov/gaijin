#pragma once

#include <memory>
#include <vector>
#include <array>

class Ball;
class Bit;
class Brick;

static const unsigned SIZE = 1024 * 768;

class Field
{
public:
   Field() = default;
   Field(unsigned color);
private:
   std::array<unsigned, SIZE> m_field;
   std::unique_ptr<Bit> m_bit;
   std::unique_ptr<Ball> m_bit;
   std::vector <std::unique_ptr<Brick>> m_bricks;
};