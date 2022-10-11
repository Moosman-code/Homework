#include <iostream>

//Напишете програма, която прочита число n (между 1 и 26) и извежда n-тата малка и главна буква от латинската азбука. 
//hint: използвайте ASCII таблицата.

int main()
{
    int number = 0;
    std::cin >> number;
    number += 64;

    std::cout << (char)number << std::endl;
    std::cout << (char)(number + 32) << std::endl;
}