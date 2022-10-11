#include <iostream>

int main()
{
    char name[] = "Martin";

    for (int i = 0; i < 6; i++) 
    {
        int number = (int)name[i];
        std::cout << number;
    }
}