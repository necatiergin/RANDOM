#include <iostream>
#include <random>

std::mt19937 &eng()
{
	static std::mt19937 eng{ std::random_device{}() };

	return eng;
}

int main()
{
	std::uniform_int_distribution<int> dist;

	for (int i = 0; i < 10; ++i)
		std::cout << dist(eng()) << '\n';
}
