#include <iostream>
#include <cmath>

//  След тежката нощ, Мишо излиза от дискотеката и поглежда такситата, но хубавите момичета вече са ги взели. 
//  Мишо е принуден да отвори такси приложението. То му предлага 3 таксита. 
//  Вашата задача е по подадени 3 цени на такситата (цели числа), да ги подредите по големина 
//  (от най-евтиното до най-скъпото).
//
//  #1 Пример
//  Вход:
//  1 2 3
//
//  Изход :
//    1 2 3
//
//    #2 Пример
//    Вход :
//      1 - 1 0
//
//    Изход :
//      -1 0 1
//
//    #3 Пример
//    Вход :
//      4242 1313 1235
//
//    Изход :
//      1235 1313 4242

int main()
{
    int firstTaxi = 0;
    std::cin >> firstTaxi;

    int secondTaxi = 0;
    std::cin >> secondTaxi;

    int thirdTaxi = 0;
    std::cin >> thirdTaxi;

    int smallesPrice = std::min(std::min(firstTaxi, secondTaxi), thirdTaxi);
    int biggestPrice = std::max(std::max(firstTaxi, secondTaxi), thirdTaxi);

    int mediumNumber = (firstTaxi > smallesPrice && firstTaxi < biggestPrice) ? firstTaxi : 
        (secondTaxi > smallesPrice && secondTaxi < biggestPrice) ? secondTaxi : thirdTaxi;

    std::cout << smallesPrice << " " << mediumNumber << " " << biggestPrice << std::endl;
}

