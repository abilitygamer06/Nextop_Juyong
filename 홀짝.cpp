#include <iostream>
using namespace std;

int main(void) {
	int T;
	int n[100];
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> n[i];
	}
	for (int i = 0; i < T; i++) {
		if ((n[i] % 2) == 0) cout << "Even" << endl;
		else cout << "Odd" << endl;
	}

	return 0;
}