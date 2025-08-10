#include <bits/stdc++.h>

using namespace std;

int n=0;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    cin >> n;
    long long fibonacci[51];
    fibonacci[1] = 1;
    fibonacci[0] = 1;
    for(int i=2; i<=n; i++){
        fibonacci[i] = fibonacci[i-2]+fibonacci[i-1]+1; //자기자신 + n-1 / n-2
    }
    cout << fibonacci[n]% 1000000007;
    
return 0;
}
