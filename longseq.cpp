#include <iostream>
#include <vector>

using namespace std;
int n;
int sum;
int i = 1;
bool need_to_exit = false;
vector<int> a;

void tra(int b) {
	if (need_to_exit) {
		return;
	}

	if ((b + i) > n - 1) {
		cout << sum << endl;
		need_to_exit = true;
		return;
	}
	if (a[b + i] > a[b]) {
		int k = i;
		sum++;
		i = 1;
		tra(b + k);
	}
	if (a[b + i] < a[b]) {
		i++;
		tra(b);
	}
}

int main(void) {
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	sum = 1;
	tra(0);
	return 0;
}