#include <random>
#include <iostream>

int main()
{
	using namespace std;

	cout << typeid(mt19937).name() << "\n\n\n";
	cout << typeid(mt19937_64).name() << "\n\n\n";

	cout << "sizeof(mt19937)    = " << sizeof(mt19937) << '\n';
	cout << "sizeof(mt19937_64) = " << sizeof(mt19937_64) << '\n';
}
