#include <random>
#include <iostream>

int main()
{
	using namespace std;

	mt19937 eng;
	constexpr size_t n = 20;

	cout << "min value    = " << mt19937::min() << '\n';
	cout << "max value    = " << mt19937::max() << '\n';
	cout << "default seed = " << mt19937::default_seed << '\n';
	cout << n << " random numbers are being generated:\n";

	for (int i = 0; i < n; ++i)
		cout << eng() << '\n';
}
