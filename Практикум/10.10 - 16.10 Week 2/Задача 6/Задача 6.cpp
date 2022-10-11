#include <iostream>
#include <cmath>

//  И като за финал, Мишо ще трябва да направи няколко прости сметки. 
//  Неговият калкулатор не работи, затова ще се нуждае от вашата помощ за последен път. 
//  Задачата е да създадете прост калкулатор. Като вход ще приемате реално число репрезентиращо първото число, 
//  символ репрезентиращ операцията, която ще бъде приложена и още едно реално число репрезентиращо второто число.
//
//  Поддържаните операции ще са :
//
//  събиране(+)
//  изваждане(-)
//  умножение(*)
//  делене(/ )
//  повдигане на определена степен(^)
//  БОНУС: корен квадратен(V) забележка : корен квадратен приема само едно число
//  БОНУС : закръгляне до второто число след запетаята


int main()
{
    double firstNumber = 0;
    std::cin >> firstNumber;

    char operation;
    std::cin >> operation;

    double secondNumber = 0;
    std::cin >> secondNumber;

    if (operation == '+') {
        std::cout << firstNumber + secondNumber << std::endl;
    }
    else if (operation == '-') {
        std::cout << firstNumber - secondNumber << std::endl;
    }
    else if (operation == '*') {
        std::cout << firstNumber * secondNumber << std::endl;
    }
    else if (operation == '/') {
        std::cout << firstNumber / secondNumber << std::endl;
    } 
    else if (operation == '^') {
        std::cout << pow(firstNumber, secondNumber) << std::endl;
    }
}