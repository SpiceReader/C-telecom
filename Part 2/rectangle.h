#pragma once
class rectangle
{
public:
	static float sum_area; // common area
	static int count; // amount of rectangles
	int left_x;
	int left_y;
	int right_x;
	int right_y;
	rectangle(int, int, int, int); // creating with 2 cordinates
	rectangle(int, int, short int, short int); // creating with 1 cordinate and two sides
	~rectangle();
	void side_length();
	void cordinates(); 
	void perimeter();
	void interior_radius(); // radius of interior circle, if possible
	int area(); 
	bool dot(int, int); // is a dot cordinate inside rectangle area
	bool square(); // is rectangle a square
	void change_geometry(int, int, int, int); // new cordinate to change geometry
};

