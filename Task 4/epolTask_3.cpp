#include "pch.h"
#include <iostream>

int i = 1, m = 0;

int multiplicity(int, int, int);

int main()
{
	int a = 2, b = 3, n = 12;
	std::cout << multiplicity(a, b, n) << std::endl;
}

int multiplicity(int a, int b, int n)
{
	if (n + 1 == i) {
		return m;
	}
	if (i % a == 0 || i % b == 0) {
		m = m + 1;
		i = i + 1;
		multiplicity(a, b, n);
	}
	else {
		i = i + 1;
		multiplicity(a, b, n);
	}
};

