#include <random>
#include <iostream>
#include <chrono>

using namespace std;

//exe'yi birden fazla kez çalıştırın:

int main()
{
	//mt19937 eng;
	//mt19937 eng{ 34567u };
	mt19937 eng{ static_cast<unsigned int>(chrono::steady_clock::now().time_since_epoch().count()) };

	for (int i = 0; i < 5; ++i)
		cout << eng() << endl;
}
