//ºü¸¥ A+B
#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	cin.tie(NULL);
	ios::sync_with_stdio(false);
	int n;
	cin >> n;
	vector<int> sum(n);
	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		sum[i] = a + b;
	}

	for (int i = 0; i < n; i++) {
		cout << sum[i] << "\n";
	}
}