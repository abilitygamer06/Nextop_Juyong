#include <iostream>

using namespace std;

int main(void) {
	int two[10];
	int a;

	cin >> a;

	two[0] = 0;

	for (int i = 1; i < 10; i++) two[i] = a;

	for (int i = 0; i < 10; i++) {
		for (int j = 1; j <= i; j++)
		{
			if (j == i) break;
			two[i] *= a;
		}
	}

	for (int i = 0; i < 10; i++) cout << a << "ÀÇ " << i << "Á¦°ö: " <<  two[i] << endl;

	return 0;
}