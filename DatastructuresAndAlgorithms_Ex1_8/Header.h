#pragma once

unsigned long long gauss_sum(unsigned long long k) {
	//return the sum of ints from 0,1,2... until including (k-1)
	// it is also a variation of Gauss's sum formula which he invented in elementary school
	// back in the day in the late 1700s when he was a kid...
	unsigned long long sum = ((k - 1)*k) / 2;
	return sum;
}


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

unsigned long long loop_uneven(unsigned long long k) {
	unsigned long long sum = 0;
	for (unsigned long long i = 1; i < k; i++) {
		if (i % 2 != 0) {
			sum += i;
		}
	}
	return sum;
}

unsigned long long loop_sum(unsigned long long k) {
	unsigned long long sum = 0;

	for (unsigned long long i = 1; i < k; i++) {
		sum += i;
	}
	return sum;
}

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


bool isEven(int k){
	//return ttrue for even, false for uneven
	//check divisible by two without division
	//just check what is the 0eth bit value with bitwise and
	bool res;
	res = (0 == (k & 0x1));
	return res;
}

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