#include <iostream>
#include <cmath>

int main()
{
    int a = 0;
    std::cin >> a;

    int b = 0;
    std::cin >> b;

    int c = 0;
    std::cin >> c;

    double s = (a + b + c) / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    std::cout << area << std::endl;
}