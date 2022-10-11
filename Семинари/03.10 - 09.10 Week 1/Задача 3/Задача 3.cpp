#include <iostream>

//  Да се напише програма, която определя дали дадено реално число х лежи в интервала [a, b]. 
//  За целта да се използва променлива от тип bool, която да има стойност true, ако x е в интервала 
//  и false в противен случай.

int main()
{
    double number = 0;
    std::cin >> number;

    int a = 0;
    std::cin >> a;

    int b = 0;
    std::cin >> b;

    bool flag = false;

    if (number >= a && number <= b) {
        flag = true;
    }
    else {
        flag = false;
    }

    std::cout << flag << std::endl;
}

