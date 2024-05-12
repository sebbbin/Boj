#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    long long a,b,n=0;
    int result =0;
    
    cin >>a>>b>>n;
    if(a%b ==0){
        cout <<0;
        return 0;
    }
    if(a>b){
        a = a%b;
    }
    for(int i=0; i<n; i++){
        a*=10;
        result = a/b;
        a= a%b;
    }
    cout << result;
    
    
return 0;
}