#include "PrintArray.h"

void pretty_print(MyArray arr, int sizeX, int sizeY)
{
	for (int i = 0; i < sizeY; i++)
	{
		for (int j = 0; j < sizeX; j++)
			printf("%4d", arr[i][j]);

		printf("\n");
	}
}
