#include <iostream>

int main()
{
    int age = 0;
    std::cin >> age;

    int days = age * 365;
    int hours = days * 24;
    int minutes = hours * 60;
    int seconds = minutes * 60;

    std::cout << days << std::endl << hours << std::endl << minutes << std::endl << seconds << std::endl;
}