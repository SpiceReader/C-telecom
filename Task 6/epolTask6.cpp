// epolTask4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

template <typename T>
T train(T, T, T, T);

int main()
{
	double s = 100000, v = 22;  // скорость и ускорение заданы в (м/с)
	double a1 = 0.02, a2 = 0.1;
	std::cout << train(s, a1, a2, v) << std::endl;
}

template <typename T>
T train(T s, T a1, T a2, T v)
{
	double t1, t2, t3, t, k, b;
	t1 = v / a1;
	t3 = v / a2;
	k = 2*s - a1*t1*t1 - a2*t3*t3;
	b = 2 * v;
	t2 = k / b;
	t = t1 + t2 + t3;
	return t;
}
