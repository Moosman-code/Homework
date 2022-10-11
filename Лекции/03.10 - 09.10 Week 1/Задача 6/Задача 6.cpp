#include <iostream>

int main()
{

    //Г 
    int x = 0;
    std::cin >> x;

    int y = 0;
    std::cin >> y;

    bool flag = false;

    int distance = sqrt(pow(x, 2) + pow(y, 2));
    flag = (x <= 0 && y <= 0 && distance <= 5) ? true : false;
    std::cout << flag << std::endl;

    //Д
    int x1 = 0;
    std::cin >> x1;

    int y1 = 0;
    std::cin >> y1;

    distance = sqrt(pow(x, 2) + pow(y, 2));
    flag = (distance >= 5 && distance <= 10) ? true : false;
    std::cout << flag << std::endl;

    //Е
    int point = 0;
    std::cin >> point;

    int beginning = 0;
    std::cin >> beginning;

    int end = 0;
    std::cin >> end;

    flag = (point >= beginning && point <= end) ? true : false;
    std::cout << flag << std::endl;

    //Ж
    int number = 0;
    std::cin >> number;

    int a = 0;
    std::cin >> a;

    int b = 0;
    std::cin >> b;

    int c = 0;
    std::cin >> c;

    int max = std::max(std::max(a, b), c);
    flag = (number == max) ? true : false;
    std::cout << flag << std::endl;
}