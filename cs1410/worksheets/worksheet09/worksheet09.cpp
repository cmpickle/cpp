#include <iostream>
#include "foo.cpp"
#include "area.h"
using namespace std;

void foo1(int x = 10, int y = 15)
{
	cout << x << " " << y << endl;
}

int main()
{
	cout << "Question 17" << endl;
	foo1();

	cout << "Question 18" << endl;
	foo1(5);

	cout << "Question 24" << endl;
	foo* f = new foo;
	f->bar();

	cout << "Question 25" << endl;
	area* a = new area(1,2);
}