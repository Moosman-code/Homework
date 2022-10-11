#include <iostream>

// Да се напише програма, която въвежда три реални числа и ги извежда на екрана сортирани във възходящ ред.

int main()
{
    int firstNumber = 0;
    std::cin >> firstNumber;

    int secondNumber = 0;
    std::cin >> secondNumber;

    int thirdNumber = 0;
    std::cin >> thirdNumber;

    int smallestNumber = std::min(std::min(firstNumber, secondNumber), thirdNumber);
    int biggestNumber = std::max(std::max(firstNumber, secondNumber), thirdNumber);

    int mediumNumber = (firstNumber > smallestNumber && firstNumber < biggestNumber) ? firstNumber :
        (secondNumber > smallestNumber && secondNumber < biggestNumber) ? secondNumber : thirdNumber;

    std::cout << smallestNumber << " " << mediumNumber << " " << biggestNumber << std::endl;
}