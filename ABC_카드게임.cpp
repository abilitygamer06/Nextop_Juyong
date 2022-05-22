#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	vector<int> player_time_check(3);
	vector<int> player_time(3, 0);
	vector<string> player(3);
	for (int i = 0; i < 3; i++) {
		cin >> player[i];
		player_time_check[i] = player[i].size();
	}
	
	while (1) {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (player_time[j] == player_time_check[j]) {
					cout << j+1 << endl;
					return 0;
				}
			}
			if (player[i][player_time[i]] == 'A') {
				player_time[i] += 1;
				i = -1;
				continue;
			}

			if (player[i][player_time[i]] == 'B') {
				player_time[i] += 1;
				i = 0;
				continue;
			}

			if (player[i][player_time[i]] == 'C') {
				player_time[i] += 1;
				i = 1;
				continue;
			}
		}
	}
	return 0;
}