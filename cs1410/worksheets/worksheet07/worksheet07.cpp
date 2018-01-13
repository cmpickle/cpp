#include <iostream>
using namespace std;

void arrTest(int* m)
{
	for (int i = 0; i < 10; ++i)
	{
		cout << m[i] << endl;
	}
}

void arrTest2(int m[5][10])
{
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			cout << m[i][j] << " ";
		}
		cout << endl;
	}
}

int main()
{
	cout << "Question 13" << endl;
	int x = 0;
	int scores[50];
	int* my_pointer = &x;

	// int* spointer = &scores; this is an invalid statement
	int* spointer = scores;
	// scores = my_pointer; This is invalid because you must specify a index location on a fixed size array

	cout << "Question 25" << endl;
	int* test = new int[10];
	//test[14] = 0; causes program to stop working

	cout << "Question 26" << endl;
	for (int i = 0; i < 10; ++i)
	{
		test[i] = i;
	}
	arrTest(test);

	cout << "Question 27" << endl;
	int mat[5][10];
	for (int i = 0; i < 5; ++i)
	{
		for (int j = 0; j < 10; ++j)
		{
			 mat[i][j] = i+j;
		}
	}
	arrTest2(mat);
}