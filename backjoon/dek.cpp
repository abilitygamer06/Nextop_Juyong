#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(void) {
	ios::sync_with_stdio(false);
	cin.tie(0);
	deque<int> dq;
	int n;
	cin >> n;
	while (n--) {
		string cmd;
		cin >> cmd;
		if (cmd == "push_front") {
			int x;
			cin >> x;
			dq.push_front(x);
		}
		else if (cmd == "push_back") {
			int x;
			cin >> x;
			dq.push_back(x);
		}
		else if (cmd == "pop_front") {
			if (dq.empty()) cout << "-1" << endl;
			else {
				cout << dq.front() << endl;
				dq.pop_front();
			}
		}
		else if (cmd == "pop_back") {
			if (dq.empty()) cout << "-1" << endl;
			else {
				cout << dq.back() << endl;
				dq.pop_back();
			}
		}
		else if (cmd == "size") {
			cout << dq.size() << endl;
		}
		else if (cmd == "empty") {
			if (dq.empty()) cout << "1" << endl;
			else cout << 0 << endl;
		}
		else if (cmd == "front") {
			if (dq.empty()) cout << "-1" << endl;
			else cout << dq.front() << endl;
		}
		else if (cmd == "back") {
			if (dq.empty()) cout << "-1" << endl;
			else cout << dq.back() << endl;
		}
	}
}