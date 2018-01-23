#include <iostream>
#include "fraction.h"

fraction fraction::add(fraction f)
{

}

fraction fraction::sub(fraction f)
{

}

fraction fraction::mult(fraction f)
{

}

fraction fraction::div(fraction f)
{

}

void fraction::print()
{
	std::cout << this->numerator << "/" << this->denominator << std::endl;
}

void fraction::read()
{
	
}

int gcd(int u, int v)
{
	u = (u < 0) ? -u : u;			// make u non-negative
	v = (v < 0) ? -v : v;			// make v non-negative

	while (u > 0)
	{
		if (u < v)
		{
			int t = u;	// swap u and v
			u = v;
			v = t;
		}

		u -= v;
	}

	return v;				// the GCD of u and v
}