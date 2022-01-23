#include <iostream>
using namespace std;

int main(void) {
	int A, B;
	int s, r;

	cin >> A >> B;
	s = A / B;
	r = A - B * s;

	cout << s;
	cout << " ";
	cout << r << endl;
	return 0;
}