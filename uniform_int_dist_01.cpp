#include <random>
#include <iostream>

int main()
{
	using namespace std;

	uniform_int_distribution dist{ 4576, 6771 };

	cout << "a value is : " << dist.a() << '\n';
	cout << "b value is : " << dist.b() << '\n';
}
