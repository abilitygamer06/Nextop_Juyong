#include <iostream>
#include <string>
#include <vector>
#include <queue>

using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<string> maze(n);
	for (int i = 0; i < n; i++) {
		cin >> maze[i];
	}

	int dxdy[4][2] = { {0, 1}, {0, -1}, {1, 0}, {-1, 0} };

	vector<vector<int>> v(n, vector<int>(m, 0));
	queue<pair<int, int>> q;

	q.push({ 0, 0 });
	v[0][0] = 1;
	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			int dx = dxdy[i][0];
			int dy = dxdy[i][1];

			int nowx = p.first + dx;
			int nowy = p.second + dy;

			if (nowx >= 0 && nowx < n && nowy >= 0 && nowy < m) {
				if (maze[nowx][nowy] - '0' == 1 && v[nowx][nowy] == 0) {
					v[nowx][nowy] = v[p.first][p.second] + 1;
					q.push({ nowx, nowy });
				}
			}
		}
	}

	cout << v[n - 1][m - 1] << endl;
	return 0;
}
