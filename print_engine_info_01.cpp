//to be compiled by MS compiler

#include <ostream>
#include <string>
#include <iomanip>
#include <random>

template<typename RG>
void print_engine_info(std::ostream& os, const std::string name)
{
	os << std::left << std::setw(16) << name << " = " << typeid(RG).name() << '\n';
}

#include <iostream>

int main()
{
	using namespace std;

	print_engine_info<minstd_rand0>(cout, "minstd_rand0");
	print_engine_info<minstd_rand>(cout, "minstd_rand");
	print_engine_info<mt19937>(cout, "mt19937");
	print_engine_info<mt19937_64>(cout, "mt19937-64");
	print_engine_info<ranlux24>(cout, "ranlux24");
	print_engine_info<ranlux24_base>(cout, "ranlux24_base");
	print_engine_info<ranlux48>(cout, "ranlux48");
	print_engine_info<ranlux48_base>(cout, "ranlux48_base");
}
