#include "pch.h"
#include "rectangle.h"
#include <iostream>

int rectangle::count;
float rectangle::sum_area;

rectangle::rectangle(int left_X, int left_Y, int right_X, int right_Y)
{
	left_x = left_X;
	left_y = left_Y;
	right_x = right_X;
	right_y = right_Y;
	count += 1;
	sum_area += area();
}

rectangle::rectangle(int left_X, int left_Y, short int side_x, short int side_y)
{
	left_x = left_X;
	left_y = left_Y;
	right_x = left_X + (int)side_x;
	right_y = left_Y + (int)side_y;
	count += 1;
	sum_area += area();
}

rectangle::~rectangle()
{
	count -= 1;
	sum_area -= area();
}

void rectangle::side_length()
{
	std::cout << " The width of the given rectangle is:  " << (right_x - left_x) << std::endl;
	std::cout << " The length of the given rectangle is:  " << (right_y - left_y) << std::endl;
}

void rectangle::cordinates()
{
	std::cout << " The left lower cordinate of the given rectangle is:  " << " X: " << left_x << " Y: " << left_y << std::endl;
	std::cout << " The left upper cordinate of the given rectangle is:  " << " X: " << left_x << " Y: " << right_y << std::endl;
	std::cout << " The right lower cordinate of the given rectangle is:  " << " X: " << right_x << " Y: " << left_y << std::endl;
	std::cout << " The right upper cordinate of the given rectangle is:  " << " X: " << right_x << " Y: " << right_y << std::endl;
}

void rectangle::perimeter()
{
	int perim = 2 * ((right_x - left_x) + (right_y - left_y));
	std::cout << " The length of the given rectangle is:  " << perim << std::endl;
}

int rectangle::area()
{
	return (right_x - left_x) * (right_y - left_y);
}

void rectangle::change_geometry(int left_X, int left_Y, int right_X, int right_Y)
{
	sum_area -= area();
	left_x = left_X;
	left_y = left_Y;
	right_x = right_X;
	right_y = right_Y;
	sum_area += area();
}

void rectangle::interior_radius()
{
	if (square())
	{
		std::cout << " The interior radius of th circle of the given rectangle is:  " << (right_x - left_x)/2 << std::endl;
	}
	std::cout << " It is impossible to enter a circle!!  " << std::endl;
}

bool rectangle::dot(int x, int y)
{
	if ((x <= right_x && x >= left_x) && (y <= right_y && y >= left_y))
	{
		return true;
	}
	return false;
}

bool rectangle::square()
{
	if ((right_x - left_x) == (right_y - left_y)){
		return true;
	}
	return false;
}