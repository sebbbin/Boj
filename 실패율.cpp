#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(const pair<int, double>& a, const pair<int, double>& b) {
    // f 값을 기준으로 내림차순 정렬
    if (a.second != b.second) {
        return a.second > b.second;
    }
    // f 값이 같은 경우 j를 기준으로 오름차순 정렬
    return a.first < b.first;
}

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    int f = 0;
    int cnt = 0;
    double k = 0;
    vector<pair<int, double>> fail;

    for (int j = 1; j <= N; j++) {
        f = 0;
        for (int i = 0; i < stages.size(); i++) {
            if (stages[i] == j) {
                f++;
            }
        }
        k = (f * 10.0) / (stages.size() - cnt); 
        cnt += f; 
        fail.push_back(make_pair(j, k));
    }

    stable_sort(fail.begin(), fail.end(), compare);
    // 정렬된 fail 벡터에서 j 값을 answer 벡터에 추가
    for (auto& pair : fail) {
        answer.push_back(pair.first);
    }

    return answer;
}
