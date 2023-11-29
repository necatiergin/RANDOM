#include <random>
#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	using namespace std;

	mt19937 eng{ random_device{}() };
	uniform_int_distribution dist{ 0, 10'000 };

	vector<int> ivec(100);
	generate(ivec.begin(), ivec.end(), [&]() {return dist(eng); });
	for (auto i : ivec)
		cout << i << ' ';
}
