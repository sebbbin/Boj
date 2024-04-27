#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    int a,b;
    cin >>n>>a>>b;
    int result=1;
    bool flag=0;
    
    while(1){
        if((a+1)/2 == (b+1)/2) 
        {
            flag=1;
            break;
            
        }
        
        a=(a+1)/2;
        b=(b+1)/2;
        
        result++;
    }
    if(flag){
        cout << result;
    }
    else{
        cout << -1;
    }
  
    
return 0;
}
