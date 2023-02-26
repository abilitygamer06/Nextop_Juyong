#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int a, b, c;
	a = 0;
	vector<int> m(4);

	for (int i = 0; i < 4; i++) {
		cin >> b >> c;
		a -= b;
		a += c;
		m[i] = a;
	}
	for (int i = 1; i < 4; i++) {
		m[0] = max(m[0], m[i]);
	}
	cout << m[0] << endl;
	return 0;
}