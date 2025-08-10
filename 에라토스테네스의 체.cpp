#include <bits/stdc++.h>

using namespace std;

//소수를 구하는 기본 틀 암기할 것

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int m,n;
    cin >> m>> n;
    int result[1000001];
    for(int i=2; i<=n; i++){
        result[i]=i;
    }
    
    for(int i=2; i<=sqrt(n); i++){
        if(result[i]==0){
            continue;
        }
        for(int j=i*i; j<=n; j+=i){
            result[j]=0;
        }
    }
    for(int i=m; i<=n; i++){
        if(result[i]!=0){
            cout << result[i]<<"\n";
        }
    }
    
    
    
return 0;
}