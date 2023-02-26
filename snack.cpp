#include <iostream>

using namespace std;

int main(void) {
	int k, n, m, h;
	cin >> k >> n >> m;
	
	h = -1 * (m - (k * n));
	if (h < 0) {
		h = 0;
	}

	cout << h << endl;
	
	return 0;
}