#include <iostream>
using namespace std;

int main()
{
	cout << "Question 2" << endl;
	int george = 1;
	int sally = 0;
	cout << (george != sally) << endl;

	cout << "Question 3" << endl;
	if (-1) 
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	cout << "Question 4" << endl;
	if (0) 
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}

	cout << "Question 10" << endl;
	cout << "a." << endl;
	int i = 100;
	while (i <= 110)
		cout << i++ << endl;
	cout << "b." << endl;
	i = 99;
	while (i <= 109)
		cout << ++i << endl;
	cout << "c." << endl;
	i = 100;
	while (i < 111)
		cout << i++ << endl;
	cout << "d." << endl;
	i = 99;
	while (i < 110)
		cout << ++i << endl;

	cout << "Question 13" << endl;
	cout << "a." << endl;
	i = 99; do cout << ++i << endl;
	while (i < 110);
	cout << "b." << endl;
	i = 99; do
	{
		cout << ++i << endl;
	} while (i < 110);
	cout << "c." << endl;
	i = 100; do cout << i++ << endl;
	while (i <= 110);
	cout << "d." << endl;
	i = 100; do
	{
		cout << i++ << endl;
	} while (i <= 110);

	cout << "Question 23 " << endl;
	int x = 10;
	{
		int x = 5;
	} cout << x << endl;

	cout << "Question 33" << endl;
	double d = 3.14159;
	i = 0;
	if (d > i)
		cout << "It is greater\n";

	cout << "Question 35" << endl;
	int a = 0, b = 0;
	if (a < 10)
		if (b > 100)
			cout << "Hello\n";
		else
			cout << "World\n";

	cout << "Question 41" << endl;
	i = 5; switch (i)
	{
	default:	cout << "sixth\n";
		break;
	case 0:	cout << "first\n";
		break;
	case 1:	cout << "second\n";
	case 10:	cout << "third\n";
	case 100:	cout << "fourth\n";
		break;
	case 1000: cout << "fifth\n"; break;
	}

	cout << "Question 42" << endl;
	i = 100;
	switch (i)
	{
	case 0:	cout << "first\n";
		break;
	case 1:	cout << "second\n";
		break;
	case 10:	cout << "third\n";
	case 100:	cout << "fourth\n";
	case 1000:	cout << "fifth\n"; break;
	default:	cout << "sixth\n";
		break;
	}

	cout << "Question 43" << endl;
	for (int i = 0; i < 10; i++) for (int j = 0; j < 10; j++) cout << j + (i*10) << endl;

	cout << "Question 44" << endl;
	int count = 0;
	for (int i = 0; i < 10; i++)
	{
		if (i == 0) break;
		for (int j = 0; j < 10; j++) count++;
	}
	cout << count << endl;

	cout << "Question 46" << endl;
	count = 0;
	int counter = 0; while (counter++ < 10); count++;
	cout << count << endl;

	cout << "Question 49" << endl;
	for (int i = 0; i < 11; i += 2)
		cout << i << endl;


	return 0;
}