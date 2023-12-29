#include <iostream>
#include <random>
#include <string>
#include <map>
#include <iomanip>

int main()
{
	std::default_random_engine eng;
	//std::normal_distribution<> dist; // mu: 0 sigma: 1

	std::normal_distribution<> dist(50., 10.);

	std::cout << "ortalama   = " << dist.mean() << '\n';
	std::cout << "std. sapma = " << dist.stddev() << "\n\n";

	std::map<int, int> mymap;

	for (int k = 0; k < 1000; ++k) {
		mymap[lround(dist(eng))]++;
	}

	for (const auto &[val, count] : mymap)
		std::cout << std::setw(2) << val << " " << std::string(count, '*') << '\n';
}
