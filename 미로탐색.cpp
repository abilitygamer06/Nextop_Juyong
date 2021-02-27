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

	int dxdy[4][2] = { (0, 1), (0, -1), (1, 0), (-1, 0) };

	vector<vector<int>> v(n, vector<int>(m, 0));
	queue<pair<int, int>> q;
	
	q.push({ 0, 0 });
	v[0][0] = 1;
	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			if (0 <= p.first + dxdy[i][0] <= n && 0 <= p.second + dxdy[i][1] <= m && maze[p.first + dxdy[i][0]][p.second + dxdy[i][1]] == 1 && v[p.first + dxdy[i][0]][p.second + dxdy[i][1]] == 0) {
				v[p.first + dxdy[i][0]][p.second + dxdy[i][1]] = v[p.first][p.second] + 1;
				q.push({ p.first + dxdy[i][0] ,p.second + dxdy[i][1] });
			}
		}
	}

	cout << v[n - 1][m - 1] << endl;
	return 0;
}
