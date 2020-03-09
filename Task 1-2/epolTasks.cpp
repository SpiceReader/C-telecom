// epolTasks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
#include <iostream>

template <typename T>
void swap(T*, T*);

int main()
{
	int a = 10, b = 99;
	double d = 2.343, g = 5.745;
	char e = '4', q = '1';
	swap<int>(&a, &b);
	swap<char>(&e, &q);
	swap<double>(&d, &g);
}

template <typename T>
void swap(T* a, T* b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
	std::cout << *a;
	std::cout << *b;
	std::cout << std::endl;
};



