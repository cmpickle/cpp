#include <iostream>
#include "fraction.h"

fraction fraction::add(fraction f)
{
	return fraction(this->numerator*f.denominator + this->denominator*f.numerator, this->denominator*f.denominator);
}

fraction fraction::sub(fraction f)
{
	return fraction(this->numerator*f.denominator - this->denominator*f.numerator, this->denominator*f.denominator);
}

fraction fraction::mult(fraction f)
{
	return fraction(this->numerator*f.numerator, this->denominator*f.denominator);
}

fraction fraction::div(fraction f)
{
	return fraction(this->numerator*f.denominator, this->denominator*f.numerator);
}

void fraction::print()
{
	std::cout << this->numerator << "/" << this->denominator << std::endl;
}

void fraction::read()
{
	std::cin >> this->numerator;
	std::cin >> this->denominator;
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