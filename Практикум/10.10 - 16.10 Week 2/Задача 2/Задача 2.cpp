#include <iostream>
#include <cmath>

//  Мишо успешно влиза в дискотеката. Той влиза с определен брой пари (реално число) и като фен на уискито, 
//  той решава, че ще си купи една бутилка на определена цена (реално число) и също така разбира, 
//  че наргилето е определена цена (реално число). За негово щастие (или нещастие), 
//  той е с определен брой други хора (естествено число), които също ще искат да пият (към тях ще включваме и Мишо). 
//  Ако всички които си разпределят плащането по равно, като всеки закръгля (разгледайте std::floor, std::round, 
//  std::ceil и преценете кое трябва да използвате тук) до горно реално (все пак трябва да има някакъв бакшиш) 
//  число сумата, която ще трябва да заплати всеки. Сега като Мишо знае колко ще трябва да плати за алкохол, 
//  той трябва да прецени дали ще има достатъчно да си купи наргиле за себе си. Принтирайте съответно "true" или "false"
//  (Разгледайте: std::boolalpha) в зависимост дали Мишо ще може да си поръча нарга.
//
//  #1 Пример
//  Вход :
//  100 - Брой пари на Мишо
//  145 - Цена на уискито
//  30 - Цена на наргилето
//  4 - Брой на хората, които ще пият, включващ Мишо
//
//  Изход :
//  true
//
//  #2 Пример
//  Вход :
//  73
//  120
//  46
//  3
//
//  Изход :
//    false


int main()
{
    double mishosMoney = 0;
    std::cin >> mishosMoney;

    double whisky = 0;
    std::cin >> mishosMoney;

    double smokeThing = 0;
    std::cin >> mishosMoney;

    int countPeople = 0;
    std::cin >> mishosMoney;

    int moneyPerPerson = std::ceil(whisky / countPeople);
    mishosMoney -= moneyPerPerson;

    if (mishosMoney >= smokeThing) {
        std::cout << "true";
    }
    else {
        std::cout << "false";
    }
}
