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
		if (scores[i] >= 90)
		{
			++bins[9];
		}
		else if (scores[i] >= 80)
		{
			++bins[8];
		}
		else if (scores[i] >= 70)
		{
			++bins[7];
		}
		else if (scores[i] >= 60)
		{
			++bins[6];
		}
		else if (scores[i] >= 50)
		{
			++bins[5];
		}
		else if (scores[i] >= 40)
		{
			++bins[4];
		}
		else if (scores[i] >= 30)
		{
			++bins[3];
		}
		else if (scores[i] >= 20)
		{
			++bins[2];
		}
		else if (scores[i] >= 10)
		{
			++bins[1];
		}
		else if (scores[i] >= 0)
		{
			++bins[0];
		}
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