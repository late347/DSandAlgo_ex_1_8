#pragma once
#include <vector>
#include <unordered_map>
#include<array>

/*gauss_sum(ull k)
finds the sum of all integers from 0 until including k-1
returns the sum*/
unsigned long long gauss_sum(unsigned long long k) {
	//return the sum of ints from 0,1,2... until including (k-1)
	// it is also a variation of Gauss's sum formula which he invented in elementary school
	// back in the day in the late 1700s when he was a kid...
	unsigned long long sum = ((k - 1)*k) / 2;
	return sum;
}

/*uneven_sum(ull k)
finds the sum of uneven integers from 0 until including k-1
returns the sum
*/
unsigned long long uneven_sum(unsigned long long k) {
	//find the sum of uneven ints from 0 until including (k-1)
	// apparently this is the correct formula
	// unevenSum = (k//2) * (k//2) using integer division
	//k=0 => 0
	//k=1 => 0
	//k=2 => 1
	//k=3 => 1
	//k=4 => 4
	//k=5 => 4
	//K=6 => 9
	if (k == 0)
		return 0;
	unsigned long long sum = (k / 2)*(k / 2);
	return sum;
}


/*simple test function to test the uneven_sum*/
unsigned long long loop_uneven(unsigned long long k) {
	unsigned long long sum = 0;
	for (unsigned long long i = 1; i < k; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}



/*simple test function to test the gauss sum*/
unsigned long long loop_sum(unsigned long long k) {
	unsigned long long sum = 0;

	for (unsigned long long i = 1; i < k; i++) {
		sum += i;
	}
	return sum;
}


/*isMultiple(ull n, ullm)
checks if the n-variable is a multiple of m-variable
i.e.
n=i*m where i is integer
return bool
*/
bool isMultiple(unsigned long long n, unsigned long long m){
	//check if n is multiple of m
	// n = i * m
	if (n == 0 || m == 0) {
		if (n == m) {
			return true;
		} else {
			return false;
		}
	} else {
		auto temp = n % m;
		if (temp == 0) {
			return true;
		} else {
			return false;
		}
	}


}

/*isEven(int k)
checks if the number was even, without using modulo or division
i.e.
you check the 0eth bit with bitmask and bitwiseAND
return bool*/
bool isEven(int k){
	//return ttrue for even, false for uneven
	//check divisible by two without division
	//just check what is the 0eth bit value with bitwiseAND
	bool res;
	res = (0 == (k & 0x1));
	return res;
}

/*creates 2D matrix and fills it with some values
and prints it*/
void printArray( size_t row,  size_t column ){

//allocate memory
	int**mA = new  int *[row];

	for (size_t i = 0; i < row; i++) {
		mA[i] = new   int[column];
	}

// make the matrix
//print matrix line by line
	int element = 0;
	for (size_t i = 0; i < row; i++) {
		for (size_t j = 0; j < column; j++) {
			mA[i][j] = element;
			std::cout << element;
			++element;
		}
		std::cout << std::endl;
	}

//dealloc
	for (size_t i = 0; i < row; i++) {
		delete[]mA[i];
	}
	delete[]mA;
}


/*powTwo(ull exponent)
calculates powers of two
i.e.
2^(exponent)
returns result*/
unsigned long long powTwo( unsigned long long exponent){
	//exponents of the same base
	//   a^n * a^m = a^(n+m)
	// however we must check if n+m = 0
	// and if n+m is even or odd

	if (exponent == 0) {
		return 1;
	} else if(exponent % 2 == 0){ //for even powers of two
		return (powTwo(exponent / 2) * (powTwo(exponent / 2)));
	} else {
		return ( 2 * (powTwo(exponent / 2) * (powTwo(exponent / 2)))  );
	}
}


/*containsEvenProduct(int*, size_t len)
checks if the function finds a pair of numbers, whose product is an even number
returns bool*/
bool containsEvenProduct(int arr[], size_t len){
	//check if you find a pair of integers whose product is even,
/*iterate from start
does it contain only zeroes => true because 0 is even
does it contain only 1s => false
does it contain only uneven numbers =>false
does it contain any  even number and any other number => return true
does it contain any odd number and any even number =>return true
*/
	if (len <= 1) {
		return false; //cant find pair if only one number
	} else {
		auto candidate = arr[0];
		if (candidate < 0) {
			candidate *= (-1);
		}
		bool isEven = ((candidate % 2) == 0);
		if (isEven) {
			return true; //must be true, because arrLen>=2 and first element is even
		} else {//otherwise candidate was uneven, so we must find any other even  number
			for (size_t i = 1; i < len; i++) { //cand was 0eth element cand2 is 1st element
				auto candidate2 = arr[i];
				if (candidate2 < 0) {
					candidate2 *= (-1);
				}
				if ((candidate2 % 2) == 0) {
					return true;
				}
			}
			return false; //couldnt find any even numbers in arr
		}
	}
}



/*isUnique(vector<int>vec)
checks if the vector has only unique elements
return bool*/
bool isUnique(std::vector<int> vec) {
	//make unorderedmap from vector
	//iterate vector and put into map,
	//check the count of them???
	//if more than 1 then notUnique
	//has increased memoryrequirement, but should be usually 
	//fastest time requirement
	if (vec.size() ==  0 || vec.size() == 1) {
		return true;
	}
	std::unordered_map<int, int> occurrences;
	for (size_t i = 0; i < vec.size(); i++) {
		if (++occurrences[ vec[i] ] > 1)
			return false;
	}

	return true;
}



/*printOddValues(vector<int>vec)
prints the odd valued elements of the vector*/
void printOddValues(std::vector<int>vec) {
	for (size_t i = 0; i < vec.size(); i++) {
		int candidate = vec[i];
		if (!isEven(candidate)) {
			std::cout << candidate;
		}
	}
	std::cout << std::endl;
}

/*fischer yates shuffle of an int array*/
void randomize(int arr[], size_t len) {
	//seed at program start
	//fischer yates shuffle
	//loop the array, and get random index from 0 to i including => into j
	//swap arr[j] arr[i]
	if (len <= 1) {
		//nothing
	} else {
		for (int i = len - 1; i > 0; i--) {
			int r = rand();
			int j =  r % (i+1);
			std::swap(arr[i], arr[j]);
		}
	}
}


/*
generate all the random permutations of the
characters of the string and print them
use only each character once*/
void permuteString(std::string str) {


}