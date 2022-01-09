#include <iostream>

using namespace std;

int main(void) {
	int T;
	int A[100], B[100];
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> A[i] >> B[i];
	}

	for (int i = 0; i < T; i++) {
		if (A[i] + B[i] >= 150) cout << "PASS" << endl;
		else cout << "FAIL" << endl;
	}
	return 0;
}