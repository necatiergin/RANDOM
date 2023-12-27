#include <regex>
#include <random>
#include <chrono>
#include <iostream>

template <typename T>
void engine_test(const char *pname, T& eng)
{
	constexpr int n = 1000'000;
	const auto tp_start = std::chrono::steady_clock::now();
	using namespace std::literals;
	int cnt{};
	while (std::chrono::steady_clock::now() - tp_start < 1s) {
		(void)eng();
		++cnt;
	}
	std::cout << pname << "    " << cnt << '\n';

}

int main()
{
	std::ranlux24 rn24;
	std::ranlux24_base rn24base;
	std::mt19937 mt19;
	std::minstd_rand mnrand;
	std::minstd_rand0 mnrand0;
	std::knuth_b knuth;

	engine_test("ranlux24", rn24);
	engine_test("ranlux24base", rn24base);
	engine_test("mt19937", mt19);
	engine_test("minstd_rand", mnrand);
	engine_test("minstd_rand0", mnrand0);
	engine_test("knuth_b", knuth);
}
