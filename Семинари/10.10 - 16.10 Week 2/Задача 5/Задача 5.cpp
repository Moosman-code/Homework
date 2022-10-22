#include <iostream>

int main()
{
    double x1, y1, x2, y2, x3, y3;
    std::cout << R"(Please input x1: )" << std::endl;
    std::cin >> x1;

    std::cout << "Please input y1: " << std::endl;
    std::cin >> y1;

    std::cout << "Please input x2: " << std::endl;
    std::cin >> x2;

    std::cout << "Please input y2: " << std::endl;
    std::cin >> y2;

    std::cout << "Please input x3: " << std::endl;
    std::cin >> x3;

    std::cout << "Please input y3: " << std::endl;
    std::cin >> y3;

    double a = std::sqrt(std::pow((x2 - x1), 2) + std::pow((y2 - y1), 2));
    double b = std::sqrt(std::pow((x3 - x1), 2) + std::pow((y3 - y1), 2));
    double c = std::sqrt(std::pow((x2 - x3), 2) + std::pow((y2 - y3), 2));

    double p = (a + b + c) / 2; 
    double area = std::sqrt(p * (p - a) * (p - b) * (p - c));

    double biggestSide = std::max(a, std::max(b, c));
    double height = (area * 2) / biggestSide;

    std::cout << "The height is: " << height << std::endl;
}