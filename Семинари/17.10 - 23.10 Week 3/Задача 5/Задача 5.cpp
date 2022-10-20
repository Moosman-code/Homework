#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;

    int factoriel = 1;
    while (number >= 1) 
    {
        factoriel *= number;
        number -= 2;
    }

    std::cout << factoriel;
}