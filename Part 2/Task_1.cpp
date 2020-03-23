#include "pch.h"
#include <iostream>
#include "rectangle.h"
#include "InscribedCircle.h"
#include "RectangleCutter.h"

int main()
{
	rectangle r1(0, 0, 3, 4), r2(0, 0, 3, 2);
	std::cout << r1.sum_area << std::endl;
	std::cout << r1.count << std::endl;
	InscribedCircle f(r2);
	f.InscribedRadius();
	RectangleCutter g(5, 5, 6, 6);
	g.cutter(r1);
	r1.cordinates();
	std::cout << r1.sum_area << std::endl;
	std::cout << r1.count << std::endl;
}

