#include <iostream>

int main()
{
    int x = 0;
    std::cin >> x;

    int y = 0;
    std::cin >> y;

    if (x > 0) {
        if (y < 0) {
            std::cout << "fourth";
        }
        else if (y > 0) {
            std::cout << "first";
        }
        else {
            std::cout << "first and fourth";
        }
    }
    else if (x < 0) {
        if (y < 0) {
            std::cout << "third";
        }
        else if (y > 0) {
            std::cout << "second";
        }
        else {
            std::cout << "second and thord";
        }
    }
    else if (x == 0) {
        if (y < 0) {
            std::cout << "third and fourth";
        }
        else if (y > 0) {
            std::cout << "first and second";
        }
        else {
            std::cout << "at the center - (0, 0)";
        }
    }
}