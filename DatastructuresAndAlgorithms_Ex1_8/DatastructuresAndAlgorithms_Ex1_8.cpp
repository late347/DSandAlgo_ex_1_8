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
#include<time.h>
#include "mVector.h"


using namespace std;

int main()
{

	srand(time(NULL));//randomize seed


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

	int arr[2] = { 1, 2 };
	randomize(arr, 2);
	std::cout << "gcd(7,2)=="<<greatestCommonDivisor(7,2)<<std::endl;

	std::cout << "permutations were" << std::endl;
	classicPermute();
	std::cout << std::endl;

	mVector a(3, 3);
	mVector b(4, 4);

	std::cout << (3 * a) <<std::endl; //ok
	std::cout <<  (b * 2) << std::endl;//ok
	std::cout << (b * a) << std::endl; //ok
	std::cout << (a - b) << std::endl; //ok
	std::cout << (b = (-1*b)) << std::endl; //ok
	std::cout << (a = a * (-(sqrt(2)))) << std::endl; //ok

	mVector c(a);
	std::cout << c+c << std::endl; //ok

	if (_CrtDumpMemoryLeaks()) // check if there were memory leaks
		std::cout << "YOU HAVE MEMORY LEAK!!\n" << std::endl;
	else
		std::cout << "no memleaks detected" << std::endl;
	
	return 0;
	
}

