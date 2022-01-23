#include <iostream>
using namespace std;

int main(void) {
	int N;
	int max_n[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> max_n[i];
	}
	for (int i = 1; i < N; i++) {
		if (max_n[0] < max_n[i]) max_n[0] = max_n[i];
	}
	cout << max_n[0] << endl;
	return 0;
}