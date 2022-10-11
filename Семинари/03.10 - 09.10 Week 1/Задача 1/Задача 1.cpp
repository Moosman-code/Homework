#include <iostream>

//Да се напише програма, която по въведени тегло в килограми и височина в метри, изчислява BMI

int main()
{
    int weight = 0;
    std::cin >> weight;

    int height = 0;
    std::cin >> height;

    std::cout << weight / pow(height, 2) << std::endl;
}