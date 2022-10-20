#include <iostream>

int main()
{
    int upperBoundry = 0;
    std::cin >> upperBoundry;

    srand(time(0));
    int randomNumber = rand() % upperBoundry + 1;

    int tries = 0;
    int guess = 0;
    std::cin >> guess;
    while (guess != randomNumber) 
    {
        if (guess < randomNumber) {
            std::cout << "Too low" << std::endl;
        }
        else if (guess > randomNumber) {
            std::cout << "Too big" << std::endl;
        }

        tries++;
        std::cin >> guess;
    }

    std::cout << tries;
}