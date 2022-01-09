#include <iostream>

using namespace std;

int main(void) {
	int N;
	int a[100];
	int cnt;
	cin >> N;
	cnt = 0;

	if (N == 1) {
		cout << "1" << endl;
		return 0;
	}
	for (int i = 0; i < N; i++) {
		a[i] = i + 1;
		if ((i + 1) % 2 != 0) {
			a[i] = 0;
			cnt++;
		}
	}
	while (1)
	{
		int j = 0;
		while (a[j] == 0) {
			for (int i = 0; i < N; i++) {
				if (a[i - 1] == 0 && a[i] != 0) {
					a[i - 1] = a[i];
					a[i] = 0;
				}
			}
			j++;
		}
		if (N - cnt == 1) {
			cout << a[0] << endl;
			return 0;
		}
		for (int i = 0; i < N; i++) {
			if ((i + 1) % 2 != 0 && a[i] != 0) {
				a[i] = 0;
				cnt++;
			}
		}
	}


	return 0;
}