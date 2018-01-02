#include "stdafx.h"
#include <iostream>
#include <string>
#include "person.h"
using namespace std;


void person::ToString()
{
	cout << name << " is " << age << " years old." << endl;
}