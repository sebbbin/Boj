#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    long long n = num; // 연산 시 int 범위를 벗어남
    while(n!=1){
        if(answer==500){
            return -1;
        }
        if(n%2==0){
            n=n/2;
        }
        else{
            n=(n*3)+1;
        }
        answer++;
    }

    return answer;
}