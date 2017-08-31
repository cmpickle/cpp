// oop.cpp.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <iostream>
#include <string>
#include "person.h"
using namespace std;



class student : public person
{
public:
	string grade;
	void ToString()
	{
		cout << name << " is " << age << " years old. He has a gpa of " << grade << endl;
	}
};

class professor : public person
{
public:
	float salary;
	void ToString()
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << name << " is " << age << " years old. He makes $" << salary << endl;
	}
};

int main()
{
	person a, b;
	student c;
	professor d;
	a.name = "Shawn";
	b.name = "Gus";
	c.name = "McNab";
	d.name = "Lassy";
	a.age = 35;
	b.age = 34;
	c.age = 29;
	d.age = 45;
	c.grade = "B-";
	d.salary = 70000;
	a.ToString();
	b.ToString();
	c.ToString();
	d.ToString();
	int x;
	cin >> x;
	return 0;
}

