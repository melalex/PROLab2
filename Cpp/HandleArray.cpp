#include "HandleArray.h"

Coordinates* FindNegative(MyArray arr, int coordX, int sizeY)
{
	for (int i = 0; i < sizeY; i++)
		if (arr[i][coordX] < 0) return new Coordinates(coordX, i);

	return nullptr;
}

MyVector Find(MyArray arr, int sizeX, int sizeY)
{
	MyVector vec;

	Coordinates *coord;
	for (int i = 0; i < sizeX; i++)
	{
		coord = FindNegative(arr, i, sizeY);
	
		if (coord)
			vec.push_back(coord);
	
	}
	return vec;
}

MyVector Find_debug(MyArray arr, int sizeX, int sizeY)
{
	MyVector vec;

	Coordinates *coord;
	for (int i = 0; i < sizeX; i++)
	{
		printf("Check %d column\n", i);

		coord = FindNegative(arr, i, sizeY);

		if (coord)
		{
			printf("Find in %d row\n", coord->y);
			vec.push_back(coord);
		}
			
	}
	return vec;
}
