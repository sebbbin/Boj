#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n=0;
    cin >>n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    
    int result=0;
    int dp[1001];
    for(int i=0; i<n; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(v[i]>v[j]){
             dp[i]=max(dp[i], dp[j]+1);   
            }
        }
        result = max(result, dp[i]);
    }
    
    cout << result;
return 0;
}
