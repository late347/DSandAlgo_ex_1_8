// DatastructuresAndAlgorithms_Ex1_8.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#ifdef _DEBUG // Active only in Debug Configuration
#define _CRTDBG_MAP_ALLOC // Visual Studio Mem Leak detector activated
#include <crtdbg.h> // runtime debug functions are declared here
#endif


#include "pch.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "Header.h"


using namespace std;

int main()
{
	//visual studio simple way of checking if there were memory leaks,
	//you gotta use crtMemDump and compare the heap memory allocations that way?
	_CrtMemState memory; // C/C++ runtime memory management state storage
	_CrtMemCheckpoint(&memory); _CrtMemDumpStatistics(&memory);

	auto j = loop_sum(6);
	auto k = gauss_sum(6);
	auto n = isMultiple(0, 45);
	auto m = powTwo(17);
	const unsigned int row = 2, column = 3;
	int matrix[row][column] = {
	{ 0, 1, 2 },
	{ 4, 5, 6 }
	};

	printArray(2,3);



	if (_CrtDumpMemoryLeaks()) // check if there were memory leaks
		std::cout << "YOU HAVE MEMORY LEAK!!\n" << std::endl;
	else
		std::cout << "no memleaks detected" << std::endl;
	
	return 0;
	
}

