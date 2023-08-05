//요세푸스 문제 0
#include <iostream>
#include <algorithm>
#include <queue>


using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N,K=0;
    cin >> N >> K;
    queue<int> q;
    for(int i=1; i<=N; i++){
        q.push(i); //1~N까지 들어가있음
    }
    cout << "<";
    while(!q.empty()){
        for(int i=0; i< K-1; i++){
            q.push(q.front()); //맨앞에 있는거 맨뒤로 넣고 K번째 올때까지..
            q.pop();
        }
        cout << q.front();
    if(q.size()!=1){
        cout<< ", ";
    }
        q.pop();

    }
    cout <<">";

return 0;
}