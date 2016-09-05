#include "Coordinates.h"

Coordinates::Coordinates(int _x, int _y)
{
	x = _x;
	y = _y;
}

Coordinates::operator std::string()
{
	return "x=" + std::to_string(x) + " y=" + std::to_string(y) + ";";
}
