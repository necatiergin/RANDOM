/*
engine state comparison with == and != operators.
*/

#include <random>
#include <iostream>

int main()
{
	using namespace std;
	
	mt19937 eng1, eng2;

	cout << boolalpha << (eng1 == eng2) << '\n';

	auto x = eng1(); x = eng1(); x = eng1();
	cout << boolalpha << (eng1 == eng2) << '\n';
	eng2(); eng2(); eng2();
	x = eng1(); x = eng1(); x = eng1();
	cout << boolalpha << (eng1 == eng2) << '\n';
}
