#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    if(s.size() ==1){
        cout << s;
    }
    int min = s.length()/2;
    if(s.length()%2==0){
     answer.push_back(s[min-1]);
     answer.push_back(s[min]);
    }
    else
      answer = s[min];
    return answer;
}