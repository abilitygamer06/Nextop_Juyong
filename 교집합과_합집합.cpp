#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(void) {
	int n, m;
	cin >> n >> m;
	vector<int> A(n), B(m);
	vector<int> inter_result;
	vector<int> plus_result;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> B[i];
	}

	//교집합
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (A[i] == B[j]) {
				for (int k = 0; k < inter_result.size(); k++) {
					if (A[i] == inter_result[k]) continue;
				}
				inter_result.push_back(A[i]);
			}
		}
	}

	if (inter_result.empty()) {
		cout << "X";
	}
	else {
		sort(inter_result.begin(), inter_result.end());
		for (int i = 0; i < inter_result.size(); i++) {
			cout << inter_result[i] << " ";
		}
	}
	cout << endl;

	//합집합
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < plus_result.size(); j++) {
			if (A[i] == plus_result[j]) continue;
		}
		plus_result.push_back(A[i]);
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < plus_result.size(); j++) {
			if (B[i] == plus_result[j]) continue;	
		}
		plus_result.push_back(B[i]);
	}
	sort(plus_result.begin(), plus_result.end());
	for (int i = 0; i < plus_result.size(); i++) {
		cout << plus_result[i] << " ";
	}
	cout << endl;

	return 0;
}