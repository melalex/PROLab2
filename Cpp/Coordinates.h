#pragma once
#include <string>

struct Coordinates
{
public:
	int x;
	int y;

	Coordinates(int _x, int _y);
	operator std::string();
};