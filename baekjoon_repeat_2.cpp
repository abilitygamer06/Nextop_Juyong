//A+B-3
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int T;
	cin >> T;
	vector<int> sum(T);
	for (int i = 0; i < T; i++) {
		int a, b;
		cin >> a >> b;
		sum[i] = a + b;
	}

	for (int i = 0; i < T; i++) {
		cout << sum[i] << endl;
	}

	return 0;
}