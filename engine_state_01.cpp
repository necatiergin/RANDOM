#include <random>
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	mt19937 eng{ 7654u };

	for (int i = 0; i < 10; ++i)
		cout << eng() << ' ';

	stringstream ss;
	ss << eng;

	cout << "\ndevam etmek icin bir tusa basin "; static_cast<void>(getchar());


	cout << "\n\n";

	for (int i = 0; i < 10; ++i)
		cout << eng() << ' ';

	cout << "\n\n";

	ss >> eng;

	for (int i = 0; i < 10; ++i)
		cout << eng() << ' ';

	cout << "\n\n";
}
