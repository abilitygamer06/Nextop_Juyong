#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int worm_cnt = 0;
vector<vector<int>> worm;
int visited[1000] = { 0, };


void dfs(int now) {
	for (int i : worm[now]) {
		if (visited[i] == 0) {
			worm_cnt++;
			visited[i] = 1;
			dfs(i);
		}
	}
}

int main(void) {
	int n;
	int m;
	cin >> n >> m;
	
	worm.resize(n);

	for (int i = 0; i <m; i++) {
		int a, b;
		cin >> a >> b;
		a -= 1;
		b -= 1;
		worm[a].push_back(b);
		worm[b].push_back(a);
	}
	visited[0] = 1;
	dfs(0);

	cout << worm_cnt << endl;
	return 0;
}