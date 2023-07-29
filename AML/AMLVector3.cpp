#include "AMLVector3.h"
#include <cmath>

namespace AML
{
	// Constructors
	Vector3::Vector3()
	:x(0.0), y(0.0), z(0.0)
	{}
	Vector3::Vector3(double val)
	:x(val), y(val), z(val)
	{}
	Vector3::Vector3(double x, double y, double z){}
	:x(x_), y(y_), z(z_)
	{}
	Vector3::Vector3(const double data_[3])
	:x(data_[0]), y(data_[1], z(data_[2])
	{}

	// Operator Assignments (Vector)
	Vector3& Vector3::operator+=(const Vector3& rhs)
	{
		x += rhs.x;
		y += rhs.y;
		z += rhs.z;
	}
	Vector3& Vector3::operator-=(const Vector3& rhs)
	{
		x -= rhs.x;
		y -= rhs.y;
		z -= rhs.z;
	}
	Vector3& Vector3::operator*=(const Vector3& rhs)
	{
		x *= rhs.x;
		y *= rhs.y;
		z *= rhs.z;
	}
	Vector3& Vector3::operator/=(const Vector3& rhs)
	{
		x /= rhs.x;
		y /= rhs.y;
		z /= rhs.z;
	}

	// Operator Assignments (Scalar)
	Vector3& Vector3::operator+=(double s)
	{
		x += s;
		y += s;
		z += s;
	}
	Vector3& Vector3::operator-=(double s)
	{
		x -= s;
		y -= s;
		z -= s;
	}
	Vector3& Vector3::operator*=(double s)
	{
		x *= s;
		y *= s;
		z *= s;
	}
	Vector3& Vector3::operator/=(double s)
	{
		x /= s;
		y /= s;
		z /= s;
	}

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
