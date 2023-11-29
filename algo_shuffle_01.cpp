#include <vector>
#include <random>
#include <iterator>
#include <iostream>
#include <algorithm>

int main()
{
	using namespace std;

	vector<int> ivec{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	mt19937 eng{ random_device{}() };

	while (true) {
		copy(ivec.begin(), ivec.end(), ostream_iterator<int>{cout, "  "});
		cout.put('\n');
		shuffle(ivec.begin(), ivec.end(), eng);
		(void)getchar();
		system("cls");
	}
}
