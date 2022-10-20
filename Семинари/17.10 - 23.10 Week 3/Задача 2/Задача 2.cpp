#include <iostream>
#include <cmath>

int main()
{
    int sum = 0;
    int number = 0;
    std::cin >> number;

    for (int i = 0; i <= number; i++) 
    {
        sum += pow(i, 2);
    }

    std::cout << sum;
}