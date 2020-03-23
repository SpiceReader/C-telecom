#pragma once
class rectangle
{
public:
	static float sum_area; // ����� �������
	static int count; // ���������� ���������������
	int left_x;
	int left_y;
	int right_x;
	int right_y;
	rectangle(int, int, int, int); // �������� �� ���������� ������ ������� � ������� �������� �����
	rectangle(int, int, short int, short int); // �� ��������� ���� � ��������
	~rectangle();
	void side_length();
	void cordinates(); 
	void perimeter();
	void interior_radius(); // ������ ��������� ���������� ���� ��������
	int area(); 
	bool dot(int, int); // ������ �� ����� � ������� ��������������
	bool square(); // �������� �� ���������?
	void change_geometry(int, int, int, int); // �������� ����� ��������� �����
};

