#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int count = 0;
    for (int i = 0; i < progresses.size(); i++) {
        if (progresses[i] < 100) {
            if (count > 0) {
                answer.push_back(count);
                count = 0;
            }
            while (progresses[i] < 100) {
                for (int j = 0; j < progresses.size(); j++) {
                    progresses[j] += speeds[j];
                }
            }
            count += 1;
            progresses.erase(progresses.begin() + i);
            i--;
        }
        else {
            count += 1;
            progresses.erase(progresses.begin() + i);
            i--;
        }
    }
    if (count > 0) {
        answer.push_back(count);
    }
    return answer;
}