#include <iostream>

using namespace std;

int main(void) {
	int N;
	int n;
	int subn;
	int cnt = 1;
	cin >> N;
	subn = N;
	n = N * 2 - 1;
	for (int i = 0; i < n; i++) {
		if (i < subn) {
			for (int j = 0; j < N - 1; j++) {
				cout << " ";
			}
			N--;
			for (int j = 0; j < cnt; j++) {
				cout << "*";
			}
			cnt += 2;
			cout << endl;
		}
		else if (i == subn) {
			N += 1;
			for (int j = 0; j < N; j++) {
				cout << " ";
			}
			N++;
			cnt -= 4;
			for (int j = 0; j < cnt; j++) {
				cout << "*";
			}
			cnt -= 2;
			cout << endl;
		}
		else {
			for (int j = 0; j < N; j++) {
				cout << " ";
			}
			N++;
			for (int j = 0; j < cnt; j++) {
				cout << "*";
			}
			cnt -= 2;
			cout << endl;
		}
	}
	return 0;
}