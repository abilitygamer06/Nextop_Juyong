#include <iostream>
#include <stack>
using namespace std;

int main(void) {
	int n,m;
	string a, b;
	string st;
	cin >> a >> b;
	n = a.length();
	m = b.length();
	for (int i = 0; i < n; i++) {
		st.push_back(a[i]);
		if (st.length() >= m) {
			string tmp = st.substr((int)st.length() - m);
			if (tmp == b) {
				for (int j = 0; j < m; j++) {
					st.pop_back();
				}
			}
		}
	}
	if (st.empty()) cout << "FRULA";
	else cout << st;

}