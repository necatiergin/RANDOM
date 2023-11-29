#include <random>
#include <iostream>

int main()
{
	using namespace std;
	
	mt19937 eng{ random_device{}() };
	//uniform_int_distribution<int>dist{ 1940, 2019 };
	//uniform_int_distribution<>dist{ 1940, 2019 };
	uniform_int_distribution dist{ 1940, 2019 }; //CTAD

	for (int i = 0; i < 100; ++i)
		cout << dist(eng) << " ";
}
