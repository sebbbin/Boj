#include <vector>
#include <iostream>
using namespace std;

// 소수 판별 함수
bool isPrime(int num){
    if(num==0 || num==1) return false;
    for(int i=2; i<num/2; i++){
        if(num%i==0) return false;
    }
    return true;
}

int solution(vector<int> nums) {
    int answer = 0;
     for(int i=0; i<nums.size()-2; i++){
        for(int j=i+1; j<nums.size()-1; j++){
            for(int k=j+1; k<nums.size(); k++){
                int n = nums[i] + nums[j] + nums[k];
                if(isPrime(n)==true){
                    answer++;
                }
            }
        }
    }

    return answer;
}