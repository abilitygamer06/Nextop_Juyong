#include <iostream>
#include <vector>
using namespace std;

int main(void) {
	int n;
	int cnt[100];
	int a = 0;
	int s = 10;
	cin >> n;
	vector<int> num(n);
	for (int i = 0; i < n; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < n; i++) {
		while (num[i] / s > 0) {
			cnt[a] = num[i] % s;
			num[i] -= cnt[a];
			s *= 10;
			a++;
		}
		cnt[a] = num[i];
		for (int j = a; j >= 0; j--) {
			cout << cnt[j] << " ";
			cnt[j] = 0;
		}
		cout << endl;
		a = 0;
		s = 10;
	}
	return 0;
}