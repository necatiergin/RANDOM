#include <random>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
	using namespace std;

	mt19937 eng{ random_device{}() };
	uniform_int_distribution dist{ 0, 10'000 };

	vector<int> ivec;
	ivec.reserve(1000u);
	generate_n(back_inserter(ivec), 1000u, [&]() {return dist(eng); });

	for (auto i : ivec)
		cout << i << ' ';
}
