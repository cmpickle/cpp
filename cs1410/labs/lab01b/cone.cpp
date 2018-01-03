#define _USE_MATH_DEFINES
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double V, S, r, h;

	cin >> r;
	cin >> h;

	V = M_PI*r*r*h / 3;
	S = M_PI*r*sqrt(r*r + h*h) + M_PI*r*r;

	cout << V << endl << S << endl;
}