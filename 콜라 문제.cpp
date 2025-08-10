#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int temp =0;
    while(n>=a){
        temp += n-((n/a)*b);   
        answer += n/a; 
        n = n/a;
    }
    n+=temp;
    temp =0;
    cout <<n;
    while(n>=a){
        if(n%a==0){
        answer += n/a;
        n =n/a;
        }
        else {
            answer += n/a;
            temp += n-((n/a)*b);
            n = n/a;
        }
    
    }
    return answer;
}