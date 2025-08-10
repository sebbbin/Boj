#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b){
    if(b==0) return a;
    return gcd(b, a%b);
}

vector<int> solution(int n, int m) {
    vector<int> answer;
    int lcm = gcd(n,m);
    answer.push_back(lcm);
    int lcmmin = n*m/lcm;
    answer.push_back(lcmmin);
    return answer;
}