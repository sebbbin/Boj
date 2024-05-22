#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >> n;
    int a,b;
    int resulta =100;
    int resultb=100;
    while(n--){
        cin >> a>>b;
        if(a>b){
            resultb -= a;
        }
        else if(a==b){
            continue;
        }
        else if(a<b){
            resulta -=b;
        }
    }
  
    cout << resulta <<"\n"<<resultb;
    
return 0;
}