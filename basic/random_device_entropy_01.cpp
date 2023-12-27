#include <random>
#include <iostream>

int main()
{
	std::random_device device;
	std::cout << "entropy : " << device.entropy() << '\n';

	//A deterministic random number generator (e.g. a pseudo-random engine) has entropy zero.
}
