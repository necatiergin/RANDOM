#include <random>
#include <iostream>
#include <chrono>
#include <vector>

using namespace std;

int main()
{
	vector<unsigned int> ivec(1'000'000);

	mt19937 eng;

	using namespace chrono;

	auto tp1 = steady_clock::now();
	for (size_t i = 0; i < ivec.size(); ++i)
		ivec[i] = eng();
	auto tp2 = steady_clock::now();

	cout << duration_cast<microseconds>((tp2 - tp1)).count() << " mikrosaniye\n";

	getchar();

	for (auto uval : ivec)
		cout << uval << ' ';
}
