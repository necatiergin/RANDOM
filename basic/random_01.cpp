#include <random>
#include <iostream>


int main()
{
	using namespace std;
	
	mt19937 eng;

	cout << "min value    = " << mt19937::min() << '\n';
	cout << "max value    = " << mt19937::max() << '\n';
	cout << "default seed = " << mt19937::default_seed << '\n';
	cout << "20 random numbers are being generated:\n";

	for (int i = 0; i < 20; ++i)
		cout << eng() << '\n';
}
