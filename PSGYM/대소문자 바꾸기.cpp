#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string str;
	int chai = 'A' - 'a';
	cin >> str;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			cout << char(str[i] + chai);
		}
		if (str[i] >= 'A' && str[i] <= 'Z') {
			cout << char(str[i] - chai);
		}
	}
	return 0;
}