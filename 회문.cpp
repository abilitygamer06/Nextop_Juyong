#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int t;
	int check;
	cin >> t;
	vector<string> str(t);
	vector<string> chstr(t);
	vector<int> answer(t, 2);
	for (int i = 0; i < t; i++) {
		cin >> str[i];
	}

	for (int i = 0; i < t; i++) {
		int k = str[i].size() / 2;
		check = 0;
		for (int j = 0; j < k; j++) {
			if (str[i][j] == str[i][str[i].size()- 1 - j]) check++;
		}
		if (check == k) answer[i] = 0;
		check = 0;
	}

	for (int i = 0; i < t; i++) {
		if (answer[i] != 2) continue;
		str[i];
		for (int j = 0; j < str[i].size(); j++) {
			int k = str[i].size() / 2;
			check = 0;
			for (int u = 0; u < k; u++) {
				if (u == j) if (chstr[i][u+1] == chstr[i][chstr[i].size() - 1 - u]) check++;
				if ((chstr[i].size() - 1 - u) == j)if (chstr[i][u] == chstr[i][chstr[i].size() - 2 - u]) check++;
				else if (chstr[i][u] == chstr[i][chstr[i].size() - 1 - u]) check++;
			}
			if (check == k) {
				answer[i] = 1;
				break;
			}
			check = 0;
		}
	}

	for (int i = 0; i < t; i++) {
		cout << answer[i] << endl;
	}
	return 0;
}
