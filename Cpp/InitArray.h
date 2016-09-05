#pragma once
#include "TypeDefs.h"

const int firs_value = -50;
const int last_value = 100;

void InitByRandom(MyArray arr, int sizeX, int sizeY);

void InitByUser(MyArray arr, int sizeX, int sizeY);

void InitOrdered(MyArray arr, int sizeX, int sizeY);