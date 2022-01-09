#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int N;
	int num = 0;
	int a = 0;
	long long int cnt = 0;
	cin >> N;
	vector<int> H(N), G(N);
	vector<char> photo(N);
	
	for (int i = 0; i < N; i++) {
		cin >> photo[i];
	}
	
	//G °¹¼ö
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (photo[j] == 'G') num++;
		}
		G[i] = num;
		num = 0;
	}
	num = 0;
	//H °¹¼ö
	for (int i = 0; i < N; i++) {
		for (int j = 0; j <= i; j++) {
			if (photo[j] == 'H') num++;
		}
		H[i] = num;
		num = 0;
	}
	for (int i = 0; i < N; i++) {
		if (N - i >= 3) {
			for (int j = i+2; j < N; j++) 
				{
					if (i - 1 < 0) {
						if (G[j] == 1 || H[j] == 1) cnt++;
					}
					else {
						if (G[j] - G[i - 1] == 1 || H[j] - H[i - 1] == 1) cnt++;	
						if (G[j] - G[i - 1] > 1 && H[j] - H[i - 1] > 1) break;
					}
					
				}
		}
	}
	cout << cnt;
	return 0;
}