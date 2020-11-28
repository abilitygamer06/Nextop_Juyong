#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main(void) {
	queue<int> q;
	int n;
	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (cmd == " pop") {
			if (q.empty()) cout << "-1\n";
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (cmd == "size") {
			cout << q.size() << endl;
		}
		else if (cmd == "empty") {
			if (q.empty()) cout << "1\n";
			else cout << "0\n";
		}
		else if (cmd == "front") {
			if (q.empty()) cout << "-1\n";
			else cout << q.front() << endl;
		}
		else {
			if (q.empty()) cout << "-1\n";
			else cout << q.back() << endl;
		}
	}

	return 0;
}