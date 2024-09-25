#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int n;
    cin >>n;
    if(n%3==0){
        if((n/3)%2==0){
            cout << "CY";
            }
        else{
            cout<<"SK";
            }
    }
    else if(n%3==1){
        if((n/3)%2==0){
            cout << "SK";
            }
        else{
            cout<<"CY";
            }
    }
    else{
        if((n/3)%2==0){
            cout << "CY";
            }
        else{
            cout<<"SK";
        }
    }
    
  
    
return 0;
}