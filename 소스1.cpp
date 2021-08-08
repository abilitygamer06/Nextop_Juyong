#include <iostream>
using namespace std;

int main(void) {
	int A[50000];
	int B[50000];
	int n;
	int x1, x2;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	cin >> x1 >> x2;
	B[0] = A[0];

	for (int i = 1; i < n; i++) {
		B[i] = B[i - 1] + A[i];
	}

	if (x1 == 0) cout << B[x2] << '\n';
	else cout << B[x2] - B[x1 - 1];

	return 0;
} 