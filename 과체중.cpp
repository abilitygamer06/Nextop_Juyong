#include <iostream>

using namespace std;

int main(void) {
	int N;
	int cnt = 0;
	int student[100];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> student[i];
		if (student[i] >= 80) cnt++;
	}

	cout << cnt << endl;
	return 0;
}