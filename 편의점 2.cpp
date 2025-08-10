#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >> n;
    long long sum=0;
    vector<int> numx(n);
    vector<int> numy(n);
    int x=0;
    int y=0;
    for(int i=0; i<n; i++){
        cin >> numx[i]>>numy[i];
    }
    
    sort(numx.begin(), numx.end());
    sort(numy.begin(), numy.end());
    
    
    x=numx[(n)/2];
    y=numy[(n)/2];
  
    for(int i=0; i<n; i++){
        sum+= abs(numx[i]-x);
        sum+= abs(numy[i]-y);
    }
    cout <<sum;
 
return 0;
}