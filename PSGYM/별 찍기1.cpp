#include <iostream>

using namespace std;

int main(void) {
	int N;
	int star[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> star[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < star[i]; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}