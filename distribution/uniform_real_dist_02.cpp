#include <random>
#include <iostream>

int main()
{
	using namespace std;

	uniform_real_distribution dist{ 18.45, 67.98 };

	cout << "a value is : " << dist.a() << '\n';
	cout << "b value is : " << dist.b() << '\n';
}
