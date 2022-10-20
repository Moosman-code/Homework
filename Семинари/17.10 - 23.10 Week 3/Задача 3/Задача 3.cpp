#include <iostream>

int main()
{
	int count = 0;
	std::cin >> count;;

	int sum = 0;
	for (int i = 0; i < count; i++) 
	{
		int random = 0;
		std::cin >> random;
		sum += random;
	}

	std::cout << sum;
}