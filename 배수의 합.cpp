#include <iostream>

using namespace std;

int main(void) {
	int N, K;
	int answer = 0;
	int i = 1;
	cin >> N >> K;

	while (1) {
		if (K * i > N) break;
		answer += K * i;
		i++;
	}

	cout << answer;
	return 0;
}