#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> v;
    for(int i=0; i<s.size(); i++){
        v.push_back(s[i] - '0');
    }
    sort(v.begin(), v.end(), greater<int>());
    for(int i=0; i<v.size(); i++){
        answer+=v[i]+'0';
    }
 
    return answer;
}