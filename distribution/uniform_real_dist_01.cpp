#include <random>
#include <iostream>

int main()
{
	using namespace std;
	
	mt19937 eng{ random_device{}()};
	uniform_real_distribution dist{ 0., 1. };
	cout.precision(12);
	for (int i = 0; i < 100; ++i) {
		cout << dist(eng) << "\n";
	}
}
