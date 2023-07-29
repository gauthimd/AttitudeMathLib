#include "AMLVector3.h"
#include <cmath>

namespace AML
{
	// Constructors
	Vector3::Vector3(){}
	Vector3::Vector3(double val){}
	Vector3::Vector3(double x, double y, double z){}
	Vector3::Vector3(const double data[3]){}

	// Operator Assignments (Vector)
	Vector3& Vector3::operator+=(const Vector3& rhs){}
	Vector3& Vector3::operator-=(const Vector3& rhs){}
	Vector3& Vector3::operator*=(const Vector3& rhs){}
	Vector3& Vector3::operator/=(const Vector3& rhs){}

	// Operator Assignments (Scalar)
	Vector3& Vector3::operator+=(double s){}
	Vector3& Vector3::operator-=(double s){}
	Vector3& Vector3::operator*=(double s){}
	Vector3& Vector3::operator/=(double s){}

	// Special Object Creators
	static const Vector3::Vector3 xAxis(){}
	static const Vector3::Vector3 yAxis(){}
	static const Vector3::Vector3 zAxis(){}

	// Vector / Vector Elementwise Operations
	Vector3 operator-(const Vector3& rhs){}
	Vector3 operator+(const Vector3& lhs, const Vector3& rhs){}
	Vector3 operator-(const Vector3& lhs, const Vector3& rhs){}
	Vector3 operator*(const Vector3& lhs, const Vector3& rhs){}
	Vector3 operator/(const Vector3& lhs, const Vector3& rhs){}
	
	// Vector / Scalar Operations
	Vector3 operator+(const Vector3& lhs, double s){}
	Vector3 operator-(const Vector3& lhs, double s){}
	Vector3 operator*(const Vector3& lhs, double s){}
	Vector3 operator/(const Vector3& lhs, double s){}
	Vector3 operator+(double s, const Vector3& rhs){}
	Vector3 operator-(double s, const Vector3& rhs){}
	Vector3 operator*(double s, const Vector3& rhs){}
	Vector3 operator/(double s, const Vector3& rhs){}
	
	// Vector Operations
	double norm(const Vector3& rhs){}
	void normalize(Vector3& rhs){}
	Vector3 unit(const Vector3& rhs){}
	Vector3 cross(const Vector3& lhs, const Vector3& rhs){}
	double dot(const Vector3& lhs, const Vector3& rhs){}
	
	// Stream Functions
	std::ostream& operator<<(std::ostream& os, const Vector3& obj){}

};
