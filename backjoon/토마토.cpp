#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int main(void) {
	int m, n;
	cin >> m >> n;

	vector<vector<int>> tomato(m, vector<int>(n, 0));
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> tomato[i][j];
		}
	}

	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	
	queue<pair<int, int>> q;
	vector<vector<int>> visit(m, vector<int>(n, 0));
	int cnt = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (tomato[i][j] == 1) {
				q.push({ i, j });
				while (!q.empty()) {
					pair<int, int> p;
					p = q.front();
					q.pop();
					for (int k = 0; k < 4; k++) {
						if (0 < p.first + dx[k] && p.first + dx[k] < m && 0 < p.second + dy[k] && p.second + dy[k] < n) {
							if (tomato[p.first + dx[k]][p.second + dy[k]] == 0 && visit[p.first + dx[k]][p.second + dy[k]] == 0) {
								cnt++;
								visit[p.first + dx[k]][p.second + dy[k]] = 1;
								q.push({ p.first + dx[k], p.second + dy[k] });
							}
						}
					}
				}
			}
		}
	}
	cout << cnt << endl;
	return 0;
}