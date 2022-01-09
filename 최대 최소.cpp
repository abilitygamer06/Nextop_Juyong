#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> s(n), max(n), min(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
		max[i] = s[i];
		min[i] = s[i];
	}
	for (int i = 1; i < n; i++) {
		if (max[0] < max[i]) max[0] = max[i];
		if (min[0] > min[i]) min[0] = min[i];
	}
	cout << max[0] << " " << min[0];
	return 0;
}