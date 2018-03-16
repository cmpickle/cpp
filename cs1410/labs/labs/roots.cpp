#include <iostream>
using namespace std;

int main()
{
	double a, b, c, x1, x2;

	cin >> a;

	if (a == 0)
	{
		cerr << "The coefficient 'a' must not be 0. Exiting..." << endl;
		exit(0);
	}

	cin >> b;
	cin >> c;

	bool complexRoots;
	int discrimenant = b * b - 4 * a * c;

	complexRoots = discrimenant < 0;

	if (!complexRoots)
	{
		x1 = (-b + sqrt(b*b - 4 * a * c)) / (2 * a);
		x2 = (-b - sqrt(b*b - 4 * a * c)) / (2 * a);

		cout << x1 << endl << x2 << endl;
	}
	else
	{
		double real, imag;

		real = -b / (2 * a);
		imag = sqrt(-discrimenant) / (2 * a);

		cout << real << '+' << imag << 'i' << endl;
		cout << real << '-' << imag << 'i' << endl;
	}

	return 0;
}