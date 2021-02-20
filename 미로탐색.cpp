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

	queue<pair<int, int>> q;
	
	q.push({ 0, 0 });
	while (!q.empty()) {
		pair<int, int> p = q.front();
		q.pop();
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 2; j++) {
				
			}
		}
	}
	return 0;
}