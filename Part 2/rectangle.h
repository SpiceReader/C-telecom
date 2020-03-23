#pragma once
class rectangle
{
public:
	static float sum_area; // общая площадь
	static int count; // количество прямоугольников
	int left_x;
	int left_y;
	int right_x;
	int right_y;
	rectangle(int, int, int, int); // создание по кординатам левого нижнего и правого верхнего углов
	rectangle(int, int, short int, short int); // по кординате угла и сторонам
	~rectangle();
	void side_length();
	void cordinates(); 
	void perimeter();
	void interior_radius(); // радиус вписанной окружности если возможно
	int area(); 
	bool dot(int, int); // входит ли точка в область прямоугольника
	bool square(); // является ли квадратом?
	void change_geometry(int, int, int, int); // задаются новые кординаты углов
};

