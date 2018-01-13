#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int* histogram(int scores[], int length);

double deviation(int scores[], int length);

double mean(int scores[], int length);

int main()
{
	int* scores = new int[100];
	int length = 0;

	while (length < 100)
	{
		int temp;
		cin >> temp;

		if (temp < 0)
		{
			break;
		}

		scores[length] = temp;
		++length;
	}

	int* histogramArr;
	histogramArr = histogram(scores, length);

	//print the histogram
	for (int i = 9; i >= 0; --i)
	{
		cout << setfill(' ') << " " << i << "| " << right << setfill('*') << setw(histogramArr[i]) << "" << endl;
	}

	double stddev = deviation(scores, length);

	cout << "SD: " << stddev << endl;
}

int* histogram(int scores[], int length)
{
	static int bins[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

	for (int i = 0; i < length; ++i)
	{
		int test = (((scores[i] / 100 * -10) + scores[i]) % 100) / 10;
		++bins[(((scores[i]/100 * -10) + scores[i]) % 100) / 10];
	}

	return bins;
}

double deviation(int scores[], int length)
{
	double meanVal = mean(scores, length);

	//calculate standard deviation
	double sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += pow(scores[i] - meanVal, 2);
	}
	
	return sqrt(sum / length);
}

double mean(int scores[], int length)
{
	double sum = 0;
	for (int i = 0; i < length; ++i)
	{
		sum += scores[i];
	}

	return sum / length;
}