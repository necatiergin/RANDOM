#include <iostream>
#include <random>

int main()
{
	std::uniform_int_distribution dist_1{ 3456, 987 };
	//...
	std::uniform_int_distribution dist_2{dist_1.param()};
	//...

}
