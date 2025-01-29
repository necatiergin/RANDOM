#include <random>
#include <iostream>

int main()
{
	std::uniform_real_distribution dist{ 18.45, 67.98 };
	std::cout << "a value is : " << dist.a() << '\n';
	std::cout << "b value is : " << dist.b() << '\n';
}
