#include <random>
#include <iostream>
#include <chrono>
#include <vector>

//using random_engine = std::mt19937;
//using random_engine = std::ranlux24;
using random_engine = std::minstd_rand;

int main()
{
	using namespace std;
	
	constexpr size_t n = 5'000'000u;

	vector<unsigned int> ivec(n);

	random_engine eng;

	using namespace chrono;

	const auto tp1 = steady_clock::now();

	for (size_t i = 0; i < ivec.size(); ++i)
		ivec[i] = eng();

	const auto tp2 = steady_clock::now();

	cout << duration_cast<microseconds>((tp2 - tp1)).count() << " mikrosaniye\n";

	getchar();

	for (const auto uval : ivec)
		cout << uval << '\n';
}
