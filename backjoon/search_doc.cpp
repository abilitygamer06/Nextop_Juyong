#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// 첫째 줄에 오는 문서
	string a;
	// 둘째 줄에 오는 문서
	string b;
	// 동일한 문자 확인
	int checking = 0;
	// 결과값
	int answer = 0;

	getline(cin, a);
	getline(cin, b);
	if (b.empty()) {
		cout << 0 << endl;
		return 0;
	}

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				checking++;
				if (checking == b.size()) {
					answer++;
					checking = 0;
				}
				if (i == a.size() - 1) {
					cout << answer << endl;
					return 0;
				}
				i++;
				continue;
			}
			if (a[i] != b[j]) {
				if (checking != 0) {
					checking = 0;
					if (a[i] == b[0]) {
						checking++;
						j = 0;
					}
				}
				if (checking == b.size()) {
					answer++;
					checking = 0;
					j = -1;
				}
				if (i == a.size() - 1) {
					cout << answer << endl;
					return 0;
				}
				i++;
				continue;
			}
		}
		i--;
	}
}
