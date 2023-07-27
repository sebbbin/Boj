//제로 실버 4
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    stack<int> s;
    int k,a=0;
    cin >>k;
    for(int i=0; i<k; i++){
        cin >> a;

        if(a==0){
            s.pop();
        }
        else{
        s.push(a);
        }
    }
    int sum = 0;
    while(s.size()){
        sum+= s.top();
        s.pop();
    }
    cout << sum;

    return 0;

}