#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int num=0;
    sort(d.begin(), d.end());
    for(int i=0; i<d.size(); i++){
        num+=d[i];
        answer++;
        if(num>budget){
            num-=d[i];
            answer--;
            break;
        }
    }
    return answer;
}