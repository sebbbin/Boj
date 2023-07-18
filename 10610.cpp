//30 실버4

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main (){
    string str;
    long long sum;
    cin >>str; //10^5개 숫자니깐 ㅣonglong도 안됨 ㅇㅋ
    for (int i=0; i<str.size(); i++){
        sum += str[i];
    }
    if(sum%3==0){
        sort(str.begin(), str.end(), greater<int>());
        cout << sum;
    }
    else {
        cout << -1;
    }
    return 0;
}