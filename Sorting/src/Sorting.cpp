//============================================================================
// Name        : Sorting.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Base.h"
using namespace std;

int main() {
	MyData<int> data(100);

	data.print();

	data.bublesort();

	data.print();
//	std::cout << a << std::endl;

	return 0;
}
