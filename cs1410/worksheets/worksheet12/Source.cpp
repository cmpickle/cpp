#include <iostream>
using namespace std;

class foo
{
private:
	int counter;
public: 
	foo(int c) : counter(c) {}
	void function1() { cout << "testing" << endl; }
	void function2() {
		cout << "foo func2" << endl;
	}
};

class bar : public foo
{
public:
	bar() : foo(10) {}
	bar(int c) : foo(c) {}
	void function()
	{
		//cout << counter << endl;
	}

	void function1() 
	{ 
		cout << "bar func1" << endl;
		foo::function1(); 
	}
};

class A
{
private:
	int w;
	int x;
public:
	A(int w, int x) : w(w), x(x) {}
};

class B : public A
{
private:
	int z;
public:
	B(int w, int x, int z) : z(z), A(w,x) {}
};

int main()
{
	bar b;
	b.function1();

	b.function2();

	B bee = B(1, 2, 3);

	return 0;
}