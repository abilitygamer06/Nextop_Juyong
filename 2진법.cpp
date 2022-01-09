#include <iostream>

using namespace std;

int main(void) {
	int n;
	int s[100];
	int a = 0;
	cin >> n;
	while (n > 0) {
		s[a] = n % 2;
		n /= 2;
		a++;
	}
	a--;
	for (int i = a; i >= 0; i--) {
		cout << s[i];
	}
	return 0;
}