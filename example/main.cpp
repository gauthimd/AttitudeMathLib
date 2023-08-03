// System includes
#include <iostream>
#include <string>
#include <cmath>

//Program includes
#include "AML.h"

using namespace AML;

int main(int argc, char **argv)
{
	Matrix33 R = Matrix33::identity();

	for (unsigned int i = 0; i < 100; i++)
	{
		Matrix33 Rdot = dcmKinematicRates_BodyRates(R, Vector3(1.0, 0.0, 0.0));
		R = integrateDCM(R, Rdot, 0.01);
		std::cout << R << std::endl;
	}

	return 0;
}
