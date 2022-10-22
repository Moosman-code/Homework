#include <iostream>

int main()
{
    int a = 0;
    std::cin >> a;
    int b = 0;
    std::cin >> b;
    int c = 0;
    std::cin >> c;

    if (a + b < c || a + c < b || b + c < a) {
        std::cout << "Not possible construction";
    }
    else {
        std::cout << "You are all set";
    }
}