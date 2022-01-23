#include <iostream>

using namespace std;

int main(void) {
	int a, b;
	int c = 0, d = 0;
	int l[100], k[100];
	int o = 0;
	int min[100], max;
	cin >> a >> b;
	if (a == 0 || b == 0) {
		cout << "0 0" << endl;
		return 0;
	}
	//최대공약수
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) {
			l[c] = i;
			c++;
		}
	}
	for (int i = 1; i <= b; i++) {
		if (b % i == 0) {
			k[d] = i;
			d++;
		}
	}
	for (int i = 0; i < c; i++) {
		for (int j = 0; j < d; j++) {
			if (l[i] == k[j]) {
				min[o] = l[i];
				o++;
			}
		}
	}
	o--;
	for (int i = 0; i < o; i++) {
		if (min[0] < min[o]) min[0] = min[o];
	}
	cout << min[0] << " ";
	o = 1;
	//최대공배수
	while (1) {
		if ((min[0] * o) % a == 0 && (min[0] * o) % b == 0) {
			cout << min[0] * o;
			break;
		}
		o++;
	}
	return 0;
}