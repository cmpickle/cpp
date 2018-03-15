#include <iostream>
#include "fraction.h"
using namespace std;

fraction operator+(fraction f1, fraction f2)
{
	return fraction(f1.numerator*f2.denominator + f1.denominator*f2.numerator, f1.denominator*f2.denominator);
}

fraction operator-(fraction f1, fraction f2)
{
	return fraction(f1.numerator*f2.denominator - f1.denominator*f2.numerator, f1.denominator*f2.denominator);
}

fraction operator*(fraction f1, fraction f2)
{
	return fraction(f1.numerator*f2.numerator, f1.denominator*f2.denominator);
}

fraction operator/(fraction f1, fraction f2)
{
	return fraction(f1.numerator*f2.denominator, f1.denominator*f2.numerator);
}

ostream& operator<<(ostream& out, fraction& f)
{
	out << f.numerator << "/" << f.denominator << endl;
	return out;
}

istream& operator>>(istream& in, fraction& f)
{
	in >> f.numerator;
	in >> f.denominator;
	return in;
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