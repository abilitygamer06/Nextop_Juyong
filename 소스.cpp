#include <iostream>

using namespace std;

int fiv(int n) {
	if (n == 0) return 0;
	else if (n >= 1) return n + fiv(n - 1);
}

int main(void) {

	int N;

	cin >> N;

	cout << fiv(N) << endl;

	return 0;
}