#include <iostream>
using namespace std;

int main()
{
	cout << "Question 11" << endl;

	struct Time
	{
		int hours;
		int minutes;
		int seconds;
	};

	struct Temp
	{
		int test;
		int stuff;
		int yeah;
	};

	Time time2;

	Temp test;

	test.test = 1;

	time2.hours = 11;

	time2.minutes = test.test;

	cout << time2.hours << endl << time2.minutes << endl;
}