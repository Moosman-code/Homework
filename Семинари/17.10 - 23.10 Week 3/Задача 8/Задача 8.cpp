#include <iostream>

int main()
{
    int firstNumber = 0;
    std::cin >> firstNumber;
    
    int secondNumber = 0;
    std::cin >> secondNumber;

    int firstSum = 0;
    while (firstNumber > 0) 
    {
        firstSum += firstNumber % 10;
        firstNumber /= 10;
    }

    int secondSum = 0;
    while (secondNumber > 0)
    {
        secondSum += secondNumber % 10;
        secondNumber /= 10;
    }

    if(firstSum == secondSum) 
    {
        std::cout << "YES" << std::endl;
    }
    else {
        std::cout << "NO" << std::endl;
    }
}