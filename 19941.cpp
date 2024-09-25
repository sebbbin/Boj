#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n,k,result=0;
    cin >> n >>k;
    string s;
    cin >> s;
    
    for(int i=0; i<n; i++){
        if(s[i]=='P'){
            for(int j=i-k; j<=k+i; j++){
                if(0<=j&&j<n&&s[j]=='H'){
                    result++;
                    s[j]='K';
                    break;
                }
            }
        }
    }
    
    cout << result;
    
return 0;
}
