#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int N;
	cin >> N;
	vector<int> a(N);

	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a.begin(), a.end());
	
	for (int i = 0; i < N; i++) {
		cout << a[i] << " ";
	}
	return 0;
}