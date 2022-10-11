#include <iostream>

int main()
{
    // A
    int p = 0;
    std::cin >> p;
    bool flag = (p % 4 == 0 || p % 7 == 0) ? true : false;
    std::cout << flag;

    // Б
    int a = 0;
    std::cin >> a;

    int b = 0;
    std::cin >> b;

    int c = 0;
    std::cin >> c;

    double discriminant = pow(b, 2) - 4 * a * c;
    flag = (discriminant < 0) ? false : true;
    std::cout << flag;

    // В
    int x1 = 0;
    std::cin >> x1;
    
    int y1 = 0;
    std::cin >> y1;

    int x2 = 0;
    std::cin >> x2;

    int y2 = 0;
    std::cin >> y2;

    int radius = 0;
    std::cin >> radius;

    int pointLength = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
    flag = (pointLength <= radius) ? true : false;
    std::cout << flag;
}