//카드 2 실버 4
//덱 /자료구조

#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >>N;
    deque<int> d;
    for(int i = 0; i < N; i++){
        d.push_back(i+1);
    }
    while( d.size()>1){
        d.pop_front();
        d.push_back(d.front());
        d.pop_front();
    }
    cout<<d.front();
    return 0;
}