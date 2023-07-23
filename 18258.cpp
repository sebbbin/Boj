#include <iostream>
#include <queue>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
int N,a;
cin >> N;
string str; 
queue<int> q;
for (int i=0; i<N; i++){
    cin >> str;
    if (str == "push")
   { cin >> a;
   q.push(a);}
   else if(str == "pop")
    {
        if(!q.empty())
    {
    cout <<q.front()<<"\n";
    q.pop();
    }
    else {
        cout << -1<<"\n";
    }
    }
    else if(str =="size")
    cout<<q.size()<<"\n";
    else if (str=="front")
    {
    if(!q.empty())
    {
    cout <<q.front()<<"\n";
    }
    else {
        cout << -1<<"\n";
    } 
    } 
    else if (str=="back")
    {
    if(!q.empty())
    {
    cout <<q.back()<<"\n";
    }
    else {
        cout << -1<<"\n";
    }  
}
    else if( str == "empty"){
        if(q.empty()){
            cout <<1<<"\n";
        }
        else{
            cout<<0<<"\n";
        }
    }
}

return 0;
}