#include <iostream>

using namespace std;

int main(void) {
	int A, B;
	int count = 0;
	int cnt = 0;
	cin >> A >> B;
	for (int i = A; i <= B; i++) {
		for (int j = 2; j <= i; j++) {
			if (i % j == 0) cnt++;
		}
		if (cnt == 1) {
			cout << i << " ";
			count++;
		}
		cnt = 0;
	}
	if (count == 0) cout << "X" << endl;
	return 0;
}