//std::discreet_distribution

#include <iostream>
#include <random>
#include <map>
#include <array>

int main()
{
	std::default_random_engine eng{ std::random_device{}() };

	std::array<double, 6> weights{ 10.0, 10.0, 10.0, 10.0, 10.0, 12.0 };

	std::discrete_distribution<size_t> dist{ std::begin(weights), std::end(weights) };
	std::map<size_t, size_t> results;

	for (size_t i{}; i < 10'000; ++i)
		++results[dist(eng)];

	for (const auto& [die, count] : results)
		std::cout << "zar degeri " << die + 1 << " : " << count << '\n';
}
