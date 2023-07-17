//9012 괄호 실버 4
//스택이용해서 풀기 -> ppt 참고한거임.. 다시 풀어볼 것. 

#include <iostream>
#include <stack>

using namespace std;

void solve(){
    string str; 
    stack<int> s; 
    cin >>str;
    for (auto i : str){
        if (i == '(') s.push(i);
        else{ 
            if (!s.empty())
            {
                s.pop();
            }
            else { //비어져 있는데 ) 들어오면 NO 출력
            cout <<"NO\n";
            return;
            }
        }   
    }
    if (s.empty()){
            cout<<"YES\n";
        }
        else{
            cout <<"NO\n";
        }
}

int main (){
ios_base::sync_with_stdio(false); 
cin.tie(nullptr); 
cout.tie(nullptr);
int N;
cin >>N;
for(int k=0; k<N; k++){
    solve();
}
}