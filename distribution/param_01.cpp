#include <random>

int main()
{
	std::uniform_int_distribution dist_1{987, 4567 };
	//...
	std::uniform_int_distribution dist_2{dist_1.param()};
	//...
}
