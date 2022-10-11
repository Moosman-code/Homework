#include <iostream>

//Напишете програма, която прочита четирицифрено число и извежда сумата на неговите цифри.

int main()
{
	int number = 0;
	std::cin >> number;

	int sum = 0;
	for (int i = 0; i < 4; i++) {
		sum += number % 10;
		number /= 10;
	}

	std::cout << sum << std::endl;
}