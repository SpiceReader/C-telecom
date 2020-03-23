#include "rectangle.h"
#pragma once
class RectangleCutter 
{
private:
	int l_x;
	int l_y;
	int r_x;
	int r_y;
public:
	RectangleCutter(int, int, int, int);
	~RectangleCutter();
	void cutter(rectangle&);
};

