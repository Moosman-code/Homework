﻿#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;

    for (int i = 1; i <= number; i++) 
    {
        if (number % i == 0) 
        {
            std::cout << i << std::endl;
        }
    }
}