// ( = 10, (( = 15, () = 20

#include <iostream>
#include <string>
using namespace std;

int main(void) {
	string b;
	cin >> b;
	int h = 10;

	for (int i = 1; i < b.size(); i++) {
		if (b[i] == b[i - 1]) h += 5;
		else h += 10;
	}
	
	cout << h << endl;
	return 0;
}