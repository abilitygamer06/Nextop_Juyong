#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	vector<int> s(n);
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	for (int i = 0; i < n; i++) {
		if (s[i] % 400 == 0) cout << "LEAP" << endl;
		else if (s[i] % 4 == 0 && s[i] % 100 != 0) cout << "LEAP" << endl;
		else cout << "COMMON" << endl;
	}
	return 0;
}