#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int k=0;
    int same_idx=1, diff_idx=0;
 
    for(int i=1; i<s.size(); i++){
            if(s[k]==s[i]) {
                same_idx++;
            }
            else {
                diff_idx++;
            }
            if(same_idx==diff_idx){
                answer++;
                k=i+1;
            }
        }
        if(same_idx!=diff_idx){
            answer++;
        }
    return answer;
}