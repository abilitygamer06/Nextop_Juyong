#include <iostream>
#include <string>
using namespace std;

string a = "";

void chat_bot(int n) {
	if (n == 1) {
		a.append("----");
		cout << a << "\"재귀함수가 뭔가요?\"" << endl;
		cout << a << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << endl;;
		cout << a << "라고 답변하였지." << endl;
		chat_bot(n - 1);
	}
	else if (n < 1) {
		if (a != "") {
			a.erase(0, 4);
			cout << a << "라고 답변하였지." << endl;
			chat_bot(n - 1);
		}
	}
	else {
		a.append("----");
		cout << a << "\"재귀함수가 뭔가요?\"" << endl;
		cout << a << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
		cout << a << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
		cout << a << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl;
		chat_bot(n - 1);
	}
}

int main(void) {
	int n;
	cin >> n;
	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << endl;
	cout << a << "\"재귀함수가 뭔가요?\"" << endl;
	cout << a << "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어." << endl;
	cout << a << "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지." << endl;
	cout << a << "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"" << endl; 
	chat_bot(n);
	return 0;
}