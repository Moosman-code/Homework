#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;
    bool isSorted = true;

    int firstDigit = number % 10;
    number /= 10;

    while (number > 0) 
    {
        int secondDigit = number % 10;
        number /= 10;

        if (firstDigit < secondDigit) {
            isSorted = false;
            break;
        }
        else {
            if (number < 10) {
                if (secondDigit < number) {
                    isSorted = false;
                }
                break;  
            }
            firstDigit = secondDigit;
        }
    }

    std::cout << isSorted;
}