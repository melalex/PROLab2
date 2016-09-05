#define _CRT_SECURE_NO_WARNINGS
#include "InitArray.h"

void InitByRandom(MyArray arr, int sizeX, int sizeY)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = firs_value + rand() % last_value;
}

void InitByUser(MyArray arr, int sizeX, int sizeY)
{
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		{
			printf("Array[%d][%d]=", i, j);
			scanf("%d", &arr[i][j]);
		}
}

void InitOrdered(MyArray arr, int sizeX, int sizeY)
{
	int first_ordered_value = -n*m / 2;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			arr[i][j] = first_ordered_value++;
}
