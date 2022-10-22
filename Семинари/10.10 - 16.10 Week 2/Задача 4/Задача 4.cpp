#include <iostream>

int main()
{
    int number = 0;
    std::cin >> number;
    bool isOrdered = true;

    int firstDecimal = 0;
    int secondDecimal = 0;

    do {
        firstDecimal = number % 10;
        number /= 10;
        secondDecimal = number % 10;
        number /= 10;

        if (firstDecimal < secondDecimal) {
            isOrdered = false;
        }
    } while (number > 0);
    {
        firstDecimal = secondDecimal;
        secondDecimal = number % 10;
        number /= 10;

        if (firstDecimal < secondDecimal) {
            isOrdered = false;
        }
    }

    std::cout << isOrdered;
}