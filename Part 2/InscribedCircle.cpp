#include "pch.h"
#include "InscribedCircle.h"
#include <iostream>
#include <math.h>


InscribedCircle::InscribedCircle(rectangle &obj)
{
	float sqr = pow((obj.right_x - obj.left_x), 2) + pow((obj.right_y - obj.left_y), 2);
	inscribed_radius = pow(sqr , 0.5 ) / 2;
}


InscribedCircle::~InscribedCircle()
{
}

void InscribedCircle::InscribedRadius()
{
	std::cout << " The inscribed radius of the circle of the given rectangle is:  " << inscribed_radius << std::endl;
}