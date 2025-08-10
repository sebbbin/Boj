#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num=0;
// n번째 인덱스를 기준으로 정렬하는 비교 함수 정의
bool compare(string s1, string s2) {
    if(s1[num] == s2[num]){
        return s1<s2;
    }
    return s1[num] < s2[num]; 
}

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    num=n;
    sort(strings.begin(), strings.end(), compare);
    return strings;
}