#include <iostream>
using namespace std;

double zVal(double Xi, double mean, double stdDev);

double deviation(double scores[], int length);

double meanVal(double scores[], int length);

int main()
{
	int maxLength = 25;
	double* X = new double[maxLength];
	int length = 0;

	while (length < maxLength)
	{
		double temp;
		cin >> temp;

		if (temp < 0)
		{
			break;
		}

		X[length] = temp;
		++length;
	}

	double mean = meanVal(X, length);

	double stddev = deviation(X, length);

	for (int i = 0; i < length; ++i)
	{
		cout << "Z" << i << ": " << zVal(X[i], mean, stddev) << endl;
	}
}

double deviation(double X[], int length)
{
	double mean = meanVal(X, length);

	//calculate standard deviation
	double sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += pow(X[i] - mean, 2);
	}

	return sqrt(sum / (double)length);
}

double meanVal(double X[], int length)
{
	double sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += X[i];
	}

	return sum / (double)length;
}

double zVal(double Xi, double mean, double stdDev)
{
	return (Xi - mean) / stdDev;
}