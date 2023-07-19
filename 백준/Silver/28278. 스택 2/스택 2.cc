//스택 2 실버 4
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main (){
ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

stack<int> s;
int N,x,y;
cin >> N;

for (int i=0; i<N; i++){
    cin >>y;
    if(y==1){
        cin >> x;
        s.push(x);

    }
    else if(y==2){
        if(!s.empty()){
            cout<<s.top()<<"\n";
            s.pop();
        }
        else{
            cout<<-1<<"\n";
        }

    }
    else if(y==3){
        cout << s.size()<<"\n";
    }
    if(y==4){
        if(!s.empty()){
            cout<<0<<"\n";
        }
        else{
            cout<<1<<"\n";
        }
        
    }
    if(y==5){
        if(!s.empty()){
            cout<<s.top()<<"\n";
        }
        else{
            cout<<-1<<"\n";
        }
        
    }
}
return 0;
}