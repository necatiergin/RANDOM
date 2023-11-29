#include <random>
#include <iostream>

int main()
{
	std::mt19937 eng{ std::random_device{}() };

	for (int i = 0; i < 10; ++i)
		std::cout << eng() << '\n';
}
