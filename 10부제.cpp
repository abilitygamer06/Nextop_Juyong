#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	int cnt = 0;
	cin >> n;
	vector<int> c(5);
	if (n >= 10) {
		n = n % 10;
	}
	for (int i = 0; i < 5; i++) {
		cin >> c[i];
		if (c[i] == n) cnt++;
	}

	cout << cnt << endl;
	return 0;
}