#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >>n;
    int arr[1000001];
    for(int i=0; i<n; i++){
        cin >>arr[i];
    }
    
    sort(arr,arr+n,greater<int>());
    
    for(int i=0; i<n; i++){
        cout <<arr[i]<<"\n";
    }
  
    
return 0;
}