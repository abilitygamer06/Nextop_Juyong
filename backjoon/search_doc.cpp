#include <iostream>
#include <string>

using namespace std;

int main(void) {
	// ù° �ٿ� ���� ����
	string a;
	// ��° �ٿ� ���� ����
	string b;
	// ������ ���� Ȯ��
	int checking = 0;
	// �����
	int answer = 0;

	getline(cin, a);
	getline(cin, b);

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < b.size(); j++) {
			if (a[i] == b[j]) {
				checking++;
				if (checking == b.size()) {
					answer++;
					checking = 0;
				}
				if (i == a.size()-1) {
					cout << answer << endl;
					return 0;
				}
				i++;
				continue;
			}
			if (a[i] != b[j]) {
				if (checking != 0) checking = 0;
				if (checking == b.size()) {
					answer++;
					checking = 0;
				}
				if (i == a.size()-1) {
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