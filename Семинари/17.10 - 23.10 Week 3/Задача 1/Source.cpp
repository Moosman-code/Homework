#include <iostream>

int main() 
{
	int number = 0;
	std::cin >> number;

	for (int i = 1; i <= number; i++) 
	{
		if (i % 3 == 0) {
			std::cout << i << std::endl;
		}
	}
}