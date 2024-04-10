#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin>>n;
    int dp[10001];
    int arr[10001];
    
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    dp[1]=arr[1];
    dp[2]=dp[1]+arr[2];
    for(int i=3; i<=n; i++){
        dp[i] = max(dp[i-3]+arr[i]+arr[i-1], max(dp[i-1], dp[i-2]+arr[i] ));
    }
    cout << dp[n];

return 0;
}
