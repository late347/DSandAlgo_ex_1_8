#include "pch.h"
#include "../DatastructuresAndAlgorithms_Ex1_8/Header.h"




TEST(sumTest, test1) {
	auto seed = 9;
	int a = loop_sum(seed);
	int b = gauss_sum(seed);
  EXPECT_EQ(a, b);
  EXPECT_TRUE(true);
}

TEST(sumTest, test2) {
	auto seed = 1;
	int a = loop_sum(seed);
	int b = gauss_sum(seed);
	EXPECT_EQ(a, b);
	EXPECT_TRUE(true);
}

TEST(sumTest, test3) {
	auto seed = 2;
	int a = loop_sum(seed);
	int b = gauss_sum(seed);
	EXPECT_EQ(a, b);
	EXPECT_TRUE(true);
}

TEST(sumTest, test4) {
	auto seed = 3;
	int a = loop_sum(seed);
	int b = gauss_sum(seed);
	EXPECT_EQ(a, b);
	EXPECT_TRUE(true);
}

TEST(sumTest, test5) {
	auto seed = 10;
	int a = loop_sum(seed);
	int b = gauss_sum(seed);
	EXPECT_EQ(a, b);
	EXPECT_TRUE(true);
}

TEST(sumTest, test6) {
	auto seed = 102;
	int a = loop_sum(seed);
	int b = gauss_sum(seed);
	EXPECT_EQ(a, b);
	EXPECT_TRUE(true);
}


TEST(isMultiple, test1) {
	auto n = 15, m = 3;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isMultiple, test2) {
	auto n = 20, m = 4;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isMultiple, test3) {
	auto n = 1, m = 1;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isMultiple, test4) {
	auto n = 0, m = 45;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, false);
	EXPECT_TRUE(true);
}

TEST(isMultiple, test5) {
	auto n = 900, m = 9;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isMultiple, test6) {
	auto n = 0, m = 0;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}


TEST(isMultiple, test7) {
	auto n = 3, m = 0;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, false);
	EXPECT_TRUE(true);
}


TEST(isMultiple, test8) {
	auto n = 15, m = 45;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, false);
	EXPECT_TRUE(true);
}
TEST(isMultiple, test9) {
	auto n = 78, m = 2;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isMultiple, test10) {
	auto n = 1, m = 1;
	bool result = isMultiple(n, m);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isEven, test1) {
	int k = 1;
	bool result = isEven(k);
	EXPECT_EQ(result, false);
	EXPECT_TRUE(true);
}

TEST(isEven, test2) {
	int k = 3;
	bool result = isEven(k);
	EXPECT_EQ(result, false);
	EXPECT_TRUE(true);
}

TEST(isEven, test3) {
	int k = -1;
	bool result = isEven(k);
	EXPECT_EQ(result, false);
	EXPECT_TRUE(true);
}

TEST(isEven, test4) {
	int k = 0;
	bool result = isEven(k);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isEven, test5) {
	int k = -97632;
	bool result = isEven(k);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}

TEST(isEven, test6) {
	int k = 79842;
	bool result = isEven(k);
	EXPECT_EQ(result, true);
	EXPECT_TRUE(true);
}



TEST(powTwo, test1) {
	unsigned long long res = pow(2, 0);
	int n = 0;
	auto  res2 = powTwo(n);
	EXPECT_EQ(res, res2);
	EXPECT_TRUE(true);
}

TEST(powTwo, test2) {
	int n = 15;
	unsigned long long res = pow(2, n);
	auto  res2 = powTwo(n);
	EXPECT_EQ(res, res2);
	EXPECT_TRUE(true);
}

TEST(powTwo, test3) {
	int n = 14;
	unsigned long long res = pow(2, n);
	auto  res2 = powTwo(n);
	EXPECT_EQ(res, res2);
	EXPECT_TRUE(true);
}

TEST(powTwo, test4) {
	int n = 1;
	unsigned long long res = pow(2, n);
	auto  res2 = powTwo(n);
	EXPECT_EQ(res, res2);
	EXPECT_TRUE(true);
}

TEST(powTwo, test5) {
	int n = 2;
	unsigned long long res = pow(2, n);
	auto  res2 = powTwo(n);
	EXPECT_EQ(res, res2);
	EXPECT_TRUE(true);
}

TEST(powTwo, test6) {
	int n = 30;
	unsigned long long res = pow(2, n);
	auto  res2 = powTwo(n);
	EXPECT_EQ(res, res2);
	EXPECT_TRUE(true);
}


TEST(loop_uneven, test1) {
	int n = 0;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 0);
	EXPECT_TRUE(true);
}
TEST(loop_uneven, test2) {
	int n = 1;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 0);
	EXPECT_TRUE(true);
}

TEST(loop_uneven, test3) {
	int n = 2;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 1);
	EXPECT_TRUE(true);
}
TEST(loop_uneven, test4) {
	int n = 3;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 1);
	EXPECT_TRUE(true);
}
TEST(loop_uneven, test5) {
	int n = 4;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 4);
	EXPECT_TRUE(true);
}
TEST(loop_uneven, test6) {
	int n = 5;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 4);
	EXPECT_TRUE(true);
}
TEST(loop_uneven, test7) {
	int n = 6;
	auto res = loop_uneven(n);
	EXPECT_EQ(res, 9);
	EXPECT_TRUE(true);
}



TEST(unevenSum, test1) {
	int n = 0;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 0);
	EXPECT_TRUE(true);
}
TEST(unevenSum, test2) {
	int n = 1;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 0);
	EXPECT_TRUE(true);
}

TEST(unevenSum, test3) {
	int n = 2;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 1);
	EXPECT_TRUE(true);
}
TEST(unevenSum, test4) {
	int n = 3;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 1);
	EXPECT_TRUE(true);
}
TEST(unevenSum, test5) {
	int n = 4;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 4);
	EXPECT_TRUE(true);
}
TEST(unevenSum, test6) {
	int n = 5;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 4);
	EXPECT_TRUE(true);
}
TEST(unevenSum, test7) {
	int n = 6;
	auto res = uneven_sum(n);
	EXPECT_EQ(res, 9);
	EXPECT_TRUE(true);
}


TEST(containEvenProd, test1) {
	int arr[1] = {0};
	bool res = containsEvenProduct(arr, 1);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}
TEST(containEvenProd, test2) {
	int arr[1] = { 1 };
	bool res = containsEvenProduct(arr, 1);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}
TEST(containEvenProd, test3) {
	int arr[2] = { 1,1 };
	bool res = containsEvenProduct(arr, 2);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test4) {
	int arr[2] = { -1, 1 };
	bool res = containsEvenProduct(arr, 2);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test5) {
	int arr[2] = { -1, -1 };
	bool res = containsEvenProduct(arr, 2);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test6) {
	int arr[2] = { -1, 0 };
	bool res = containsEvenProduct(arr, 2);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test7) {
	int arr[3] = { -1, 1,0 };
	bool res = containsEvenProduct(arr, 3);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test8) {
	int arr[1] = { 2 };
	bool res = containsEvenProduct(arr, 1);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}
TEST(containEvenProd, test9) {
	int arr[4] = { -2,1,-1,-1 };
	bool res = containsEvenProduct(arr, 4);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test10) {
	int arr[5] = { -1, 1, -1, 0, -12 };
	bool res = containsEvenProduct(arr, 5);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test11) {
	int arr[2] = { -7,0 };
	bool res = containsEvenProduct(arr, 2);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(containEvenProd, test12) {
	int arr[2] = { -8, -1 };
	bool res = containsEvenProduct(arr, 2);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}


TEST(isUnique, test1) {
	std::vector<int> vec = { -8, -1, 0 };
	bool res = isUnique(vec);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(isUnique, test2) {
	std::vector<int> vec = { -8, 0, 2, 5, 8, 8, 7 };
	bool res = isUnique(vec);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}

TEST(isUnique, test3) {
	std::vector<int> vec = { -8, 0, 2, 5, 8, 7 };
	bool res = isUnique(vec);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}


TEST(isUnique, test4) {
	std::vector<int> vec = { -8};
	bool res = isUnique(vec);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(isUnique, test5) {
	std::vector<int> vec = { };
	bool res = isUnique(vec);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}

TEST(isUnique, test6) {
	std::vector<int> vec = {2, 2};
	bool res = isUnique(vec);
	EXPECT_EQ(res, false);
	EXPECT_TRUE(true);
}



TEST(isUnique, test7) {
	std::vector<int> vec = { 1,2 };
	bool res = isUnique(vec);
	EXPECT_EQ(res, true);
	EXPECT_TRUE(true);
}