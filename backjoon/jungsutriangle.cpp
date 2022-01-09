// dp[i][j] = (i, j)를 도착점으로 했을때 최대합.

// dp[i][j] = max(dp[i-1][j-1], dp[i-1][j]) + tri[i][j]

// dp[0][0] = tri[0][0]

// max(dp[n-1][0 ~ n-1]

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
vector<vector<int>> tri;
vector<vector<int>> dp;

int f(int a, int b) {
	if (b < 0 || a < b) return 0;
	if (dp[a][b] != -1) return dp[a][b];
	return dp[a][b] = max(f(a - 1, b - 1), f(a - 1, b)) + tri[a][b];
}

int main(void) {
	int k = 1;
	cin >> n;
	vector<int> max_tri(n);
	tri.resize(n);
	dp.resize(n);
	/*int tri[500][500];
	int dp[500];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			cin >> tri[i][j];
		}
		k++;
	}*/
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			int a;
			cin >> a;
			tri[i].push_back(a);
			dp[i].push_back(-1);
		}
	}
	dp[0][0] = tri[0][0];
	for (int i = 0; i < n; i++) {
		int fv = f(n-1, i);
		max_tri[i] = fv;
	}

	for (int i = 0; i < n; i++) {
		if (max_tri[0] < max_tri[i]) max_tri[0] = max_tri[i];
	}
	
	cout << max_tri[0] << endl;
	return 0;
}