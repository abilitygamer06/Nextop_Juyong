#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int T;
	cin >> T;
	vector<int> sum(T);
	vector<int> A(T);
	vector<int> B(T);

	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		A[i] = a;
		B[i] = b;
		sum[i] = a + b;
	}

	for (int i = 0; i < T; i++) {
		cout << "Case #" << i + 1 << ": " << A[i] << " + " << B[i] << " = " << sum[i] << endl;
	}
	
	return 0;
}