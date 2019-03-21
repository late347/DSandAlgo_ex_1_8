#include "pch.h"
#include "mVector.h"



mVector::mVector(double x_0 = 1, double y_0 = 1)
	: x(x_0), y(y_0){
}


mVector::~mVector() {
}



mVector mVector::operator-(const mVector &ref) {
	return mVector( (this->x - ref.x ), (this->y -ref.y)  );
}

mVector mVector::operator+(const mVector & right) { // addition of vecs
	
	double x1 = this->x + right.x;
	double y1 = this->y + right.y;
	mVector result(x1, y1);
	return result;
}



double mVector::operator*(const mVector & right) { //dotproduct of vecs
	
	double x1 = (this->x) * (right.x);
	double y1 = (this->y)  * (right.y);
	double result = x1 + y1;
	return result;
}

const mVector & mVector::operator=(const mVector &mvec) { //assignment operator
	
	if (this == &mvec) { //always prevent self assignment in assignOperator
		return *this;
	} else {
		(this->x) = (mvec.x);
		(this->y) = (mvec.y);
		return *this;
	}
}

std::ostream & operator<<(std::ostream & out, const mVector & ref) { // output operator

	out << "(" << std::setprecision(4) <<ref.x 
		<< "," << std::setprecision(4) << ref.y
		<< ")";
	return out;
}

mVector  operator*(const double sca, const mVector &vec) {
	// TODO: insert return statement here
	mVector res( vec.x * sca, vec.y *sca  );
	return res;
}

mVector  operator*(const mVector &vec, const double sca) {
	// TODO: insert return statement here

	mVector res( vec.x * sca, vec.y * sca  );
	return res;
}


