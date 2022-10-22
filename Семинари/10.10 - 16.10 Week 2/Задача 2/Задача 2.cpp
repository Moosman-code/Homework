#include <iostream>

int main()
{
    char letter;
    std::cin >> letter;

    if ((int)letter <= 90) {
        std::cout << "upper casing";
    }
    else {
        std::cout << "lower casing";
    }
}