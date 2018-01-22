#include "area.h"
#include <iostream>

area::area(int w, int h) : width(w), height(h)
{
	std::cout << w * h << std::endl;
}
