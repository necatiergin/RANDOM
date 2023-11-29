#include <string>
#include <random>
#include <iostream>
#include <algorithm>

int main()
{
	std::string s{ "ABCDEFGHIJKLMNOPQRSTUVWXYZ" };

	std::mt19937 eng{ std::random_device{}() };

	while (true) {
		std::cout << s << '\n';
		shuffle(begin(s), end(s), eng);
		(void)getchar();
	}
}
