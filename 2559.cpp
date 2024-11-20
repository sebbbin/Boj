#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n,k,temp;
    cin >> n>> k;
    vector<int> v;
    cin >> temp;
    v.push_back(temp);
    
    for(int i =1; i<n; i++){
        cin >> temp;
        v.push_back(temp);
        v[i]+=v[i-1];
    }
    
    int maxResult=v[k-1];
    int z=0;
    
    for(int i=k; i<n; i++){
        if(v[i]-v[z]>maxResult){
            maxResult = v[i]-v[z];
        }
        z++;
    }
    
    cout << maxResult;

    return 0;
}