#include <iostream>

//Напишете програма, която приема 2 цели числа и принтира техния сбор, разлика, произведение, частно и остатък. 
//Всички са цели числа.

int main()
{
    int a = 0;
    int b = 0;

    std::cin >> a;
    std::cin >> b;

    std::cout << a + b << std::endl << a - b << std::endl << a * b << std::endl << a / b << std::endl << a % b << std::endl;

//Като първа, но с дробни числа.

    double c = 0;
    double d = 0;

    std::cin >> c;
    std::cin >> d;

    std::cout << c + d << std::endl << c - d << std::endl << c * d << std::endl << c / d << std::endl << remainder(c ,d) << std::endl;

}