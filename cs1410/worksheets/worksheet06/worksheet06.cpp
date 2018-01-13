#include <iostream>
using namespace std;

struct foo
{
	int	part;
	double	cost;
};

void function(foo arg);

void function2(foo* arg)
{
	arg->part = 100;
}

void f1(int a = 10)
{
	cout << a << endl;
}

void xyz(int x, int y, int z)
{
	cout << x << " " << y << " " << z << endl;
}

void cube(int* x)
{
	*x = (*x) * (*x) * (*x);
}

void bar(int a);


int main()
{
	cout << "Question 31" << endl;
	
	foo	x = { 10, 17.59 }; 
	function(x);
	cout << x.part << endl;

	cout << "Question 33" << endl;
	function2(&x);
	cout << x.part << endl;

	cout << "Question 35" << endl;
	f1();

	cout << "Question 45" << endl;
	//xyz(10, 20); Build error, too few arguments

	cout << "Question 50" << endl;
	int y = 10;
	cube(&y);
	cout << y << endl;

	cout << "Question 52" << endl;
	//bar(10); unresolved external symbol "void __cdecl bar(int)" referenced in function main

	return 0;
}

void function(foo arg)
{
	arg.part = 100;
}