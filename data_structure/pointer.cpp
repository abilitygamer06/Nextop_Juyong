#include <iostream>
#define SIZE 6
using namespace std;

void get_integers(int list[]) {
	cout << "6개의 정수를 입력하십시오: ";
	for (int i = 0; i < SIZE; ++i) {
		cin >> list[i];
	}
}

int cal_sum(int list[]) {
	int sum = 0;
	for (int i = 0; i < SIZE; ++i) {
		sum += *(list + i);
	}
	return sum;
}

int main(void) {
	int list[SIZE];
	get_integers(list);
	cout << "합 =" << cal_sum(list) << endl;
	return 0;
}