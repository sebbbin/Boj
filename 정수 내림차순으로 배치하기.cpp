#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    string s = " ";
    s= to_string(n);
    vector<int> vec;
    for(int i=0; i<s.size(); i++){
        vec.push_back(s[i]-'0');
    }
    sort(vec.begin(), vec.end(), greater<>());
    s = "";
    for(int i=0; i<vec.size(); i++){
        s += to_string(vec[i]);
    } 
    long long answer =0;
    answer = stoll (s);
    return answer;
}