#pragma once
#include <vector>
#include <iostream>
#include <iomanip>
class mVector {


	friend std::ostream &operator<<(std::ostream & out, const mVector & ref); //  output operator
	friend mVector  operator*(const double, const mVector &); //scalar*vec
	friend mVector  operator*(const mVector &, const double); //vec*scalar

public:	
	explicit mVector(double, double); //explicit constructor
	virtual ~mVector(); 

	mVector operator-(const mVector &); //vector subtraction
	mVector operator+(const mVector &); //addition vec+vec
	double operator*(const mVector &); //dotproduct vec*vec

	const mVector& operator=(const mVector &); //assignment

	double getx() { return x; }
	double gety() { return y; }

private:
	double x;
	double y;
	
};

