#include <random>
#include <iostream>

int main()
{
	std::mt19937 eng{ std::random_device{}() };
	std::bernoulli_distribution dist{ 0.75 };
	constexpr std::size_t n = 10'000'000;
	int count{};

	for (std::size_t i{}; i < n; ++i) {
		if (dist(eng))
			++count;
	}

	std::cout << "probability = " << static_cast<double>(count) / n << '\n';
}
