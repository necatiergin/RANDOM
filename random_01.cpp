#include <random>
#include <iostream>

using namespace std;

int main()
{
	mt19937 eng;

	cout << "min value    = " << mt19937::min() << '\n';
	cout << "max value    = " << mt19937::max() << '\n';
	cout << "default seed = " << mt19937::default_seed << '\n';
	cout << "20 tane rastgele sayi uretiliyor\n";

	for (int i = 0; i < 20; ++i)
		cout << eng() << '\n';
}
