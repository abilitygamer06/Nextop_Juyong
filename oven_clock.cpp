#include <iostream>
using namespace std;

int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	
	a += (b + c) / 60;
	if (a >= 24) a -= 24;
	b = (b + c) % 60;

	cout << a << " " << b;
}