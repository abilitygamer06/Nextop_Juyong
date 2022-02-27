#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	int ans;
	cin >> n;
	vector<int> st(n);

	for (int i = n-1; i >= 0; i--) {
		cin >> st[i];
	}

	ans = 1;
	for (int i = 1; i < n; i++) {
		if (st[0] < st[i]) {
			ans++;
			st[0] = st[i];
		}
	}

	cout << ans << endl;
	return 0;
}