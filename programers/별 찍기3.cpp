#include <iostream>

using namespace std;

int main(void) {
	int N;
	int cnt = 1;
	cin >> N;
	for (int i = N; i > 0; i--) {
		for (int j = 0; j < i - 1; j++) {
			cout << " ";
		}
		for (int j = 0; j < cnt; j++) {
			cout << "*";
		}
		cnt += 2;
		cout << endl;
	}
	return 0;
}