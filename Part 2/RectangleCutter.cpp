#include "pch.h"
#include "RectangleCutter.h"


RectangleCutter::RectangleCutter(int left_x, int left_y, int right_x, int right_y)
{
	l_x = left_x;
	l_y = left_y;
	r_x = right_x;
	r_y = right_y;
}


RectangleCutter::~RectangleCutter()
{}

void RectangleCutter::cutter(rectangle &obj)
{
	if (l_y >= obj.right_y) // ������� ������� �� ������������ � ��������������� � ���� �� ����������
	{
		if (l_x >= obj.right_x)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_x = l_x;
			obj.right_y = l_y;
		}
		else if (r_x <= obj.left_x)
		{
			obj.left_x = r_x;
			obj.left_y = l_y;
			obj.right_x = r_x;
			obj.right_y = l_y;
		}
		else if (l_x >= obj.left_x && r_x <= obj.right_x)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_x = r_x;
			obj.right_y = l_y;
		}
		else if (l_x >= obj.left_x && r_x >= obj.right_x)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_y = l_y;
		}
		else if (l_x <= obj.left_x && r_x <= obj.right_x)
		{
			obj.left_y = l_y;
			obj.right_x = r_x;
			obj.right_y = l_y;
		}
		else if (l_x <= obj.left_x && r_x >=obj.right_x)
		{
			obj.left_y = l_y;
			obj.right_y = l_y;
		}
	}

	else if (r_y <= obj.left_y) // ������� ������� �� ������������ � ��������������� � ���� �� ����������
	{
		if (r_x <= obj.left_x)
		{
			obj.left_x = r_x;
			obj.left_y = r_y;
			obj.right_x = r_x;
			obj.right_y = r_y;
		}
		else if (r_x >= obj.right_x)
		{
			obj.left_x = l_x;
			obj.left_y = r_y;
			obj.right_x = l_x;
			obj.right_y = r_y;
		}
		else if (l_x >= obj.left_x && r_x <= obj.right_x)
		{
			obj.left_x = l_x;
			obj.left_y = r_y;
			obj.right_x = r_x;
			obj.right_y = r_y;
		}
		else if (l_x >= obj.left_x && r_x >= obj.right_x)
		{
			obj.left_x = l_x;
			obj.left_y = r_y;
			obj.right_y = r_y;
		}
		else if (l_x <= obj.left_x && r_x <= obj.right_x)
		{
			obj.left_y = r_y;
			obj.right_x = r_x;
			obj.right_y = r_y;
		}
		else if (l_x <= obj.left_x && r_x >= obj.right_x)
		{
			obj.left_y = r_y;
			obj.right_y = r_y;
		}
	}

	else if (r_x <= obj.left_x) // ������� ������� �� ������������ � ��������������� � ����� �� ����������
	{
		if (r_y >= obj.right_y && l_y <= obj.left_y)
		{
			obj.right_x = r_x;
			obj.left_x = r_x;
		}
		else if (r_y <= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = r_x;
			obj.left_y = r_y;
			obj.right_x = r_x;
			obj.right_y = l_y;
		}
		else if (r_y >= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = r_x;
			obj.left_y = l_y;
			obj.right_x = r_x;
		}
		else if (r_y <= obj.right_y && l_y <= obj.left_y)
		{
			obj.left_x = r_x;
			obj.right_x = r_x;
			obj.right_y = r_y;
		}
	}

	else if (l_x >= obj.right_x) // ������� ������� �� ������������ � ��������������� � ������ �� ����������
	{
		if (r_y >= obj.right_y && l_y <= obj.left_y)
		{
			obj.right_x = l_x;
			obj.left_x = l_x;
		}
		else if (r_y <= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = l_x;
			obj.left_y = r_y;
			obj.right_x = l_x;
			obj.right_y = l_y;
		}
		else if (r_y >= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_x = l_x;
		}
		else if (r_y <= obj.right_y && l_y <= obj.left_y)
		{
			obj.left_x = l_x;
			obj.right_x = l_x;
			obj.right_y = r_y;
		}
	}

	else if (r_x >= obj.left_x && l_x <= obj.left_x) // ����������� �� ������ �������
	{	
		if (r_y >= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_y = l_y;
			obj.right_x = r_x;
		}
		else if (r_y <= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_y = l_y;
			obj.right_y = r_y;
			obj.right_x = r_x;
		}
		else if (r_y <= obj.right_y && l_y <= obj.left_y)
		{
			obj.right_x = r_x;
			obj.right_y = r_y;
		}
    }

	else if (r_x <= obj.right_x && l_x >= obj.left_x) // ����������� �� ������
	{
		if (r_y >= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_x = r_x;
		}
		else if (r_y <= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_y = r_y;
			obj.right_x = r_x;
		}
		else if (r_y <= obj.right_y && l_y <= obj.left_y)
		{
			obj.left_x = l_x;
			obj.right_x = r_x;
			obj.right_y = r_y;
		}
	}

	else if (r_x >= obj.right_x && l_x <= obj.right_x) // ����������� �� ����� �������
	{
		if (r_y >= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;	
		}
		else if (r_y <= obj.right_y && l_y >= obj.left_y)
		{
			obj.left_x = l_x;
			obj.left_y = l_y;
			obj.right_y = r_y;
		}
		else if (r_y <= obj.right_y && l_y <= obj.left_y)
		{
			obj.left_x = l_x;
			obj.right_y = r_y;		
		}
	}

}