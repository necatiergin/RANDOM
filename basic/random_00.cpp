#include <random>
#include <iostream>
#include <chrono>

int main()
{
	using namespace std;

	mt19937 eng1; //default seed
	mt19937 eng2(78254u);
	mt19937 eng3(random_device{}()); 
	mt19937 eng4(chrono::steady_clock::now().time_since_epoch().count());
}
