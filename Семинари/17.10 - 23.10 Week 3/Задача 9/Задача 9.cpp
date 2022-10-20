#include <iostream>
#include <cmath>

int main()
{
    int number = 0;
    std::cin >> number;
    number = abs(number);
    int result = pow(number, 2);

    bool isAutomorph = true;
    while (number > 0) 
    {
        if (number % 10 != result % 10) {
            isAutomorph = false;
            break;
        }
        else {
            number /= 10;
            result /= 10;
        }
    }

    std::cout << isAutomorph;
}