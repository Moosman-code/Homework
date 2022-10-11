#include <iostream>

//Да се напише програма, която разменя и извежда стойностите на две цели числа без да използва помощна променлива.

int main()
{
    int a = 0;
    std::cin >> a;

    int b = 0;
    std::cin >> b;

	a = a + b;
	b = a - b;
	a = a - b;

	std::cout << a << b << std::endl;
}

