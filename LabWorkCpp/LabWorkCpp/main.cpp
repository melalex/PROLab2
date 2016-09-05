#include "TypeDefs.h"
#include "InitArray.h"
#include "PrintArray.h"
#include "Coordinates.h"
#include "HandleArray.h"
#include <iostream>
#define DEBUG

int main()
{
	int decision;
	std::cout << "Chose type of initialization:\n"
		  	  << "1. By Random\n"
			  << "2. By user\n"
			  << "3. Ordered\n\n";

	std::cin >> decision;
		
	void(*init)(MyArray arr, int sizeX, int sizeY);

	switch (decision)
	{
		case 1:
			init = &InitByRandom;
			break;
		
		case 2:
			init = &InitByUser;
			break;

		default:
			init = &InitOrdered;
			break;
	}

	MyArray arr;
	init(arr, n, m);

	std::cout << std::endl;
	pretty_print(arr, n, m);

	std::cout << std::endl;

#ifdef DEBUG
	Find_debug(arr, n, m);
#else
	for (Coordinates *coord : Find(arr, n, m))
		std::cout << (std::string)*coord << std::endl;
#endif

	std::cout << std::endl;
	system("PAUSE");
}