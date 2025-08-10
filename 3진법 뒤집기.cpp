#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    int temp=n;
    vector<int> vec;
    while(temp){
        vec.push_back(temp%3);
        temp/=3;
    }
    
    int num=1;
    for(int i=vec.size()-1;i>=0;i--){
        answer+=vec[i]*num;
        num*=3;
    }
    
    return answer;
}