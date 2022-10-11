#include <iostream>
#include <cmath>

//Напишете програма, която прочата 2 числа, които ще служат за координатите на точка в декартова координатна система. 
//Първото ще е x, а второто y. Пресметнете разтоянието от центъра (0, 0).

int main()
{
	int x = 0;
	int y = 0;

	std::cin >> x;
	std::cin >> y;

	int length = sqrt(pow(x, 2) + pow(y, 2));
	std::cout << length << std::endl;

//Нека сега да проверяваме дали точката лежи в кръг с радиус r (въведен от потребителя).

	int r = 0;
	std::cin >> r;

	bool isIn = false;
	if (length <= r) {
		std::cout << true << std::endl;
	}
	else {
		std::cout << false << std::endl;
	}
}

