#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    string s="";
    cin >> s;
    int num=0;
    int result=1;
    while(1){
        for(int i=0; i<s.size(); i++){
            num+=s[i]-'0';
        }
        if(num>9){
           s=to_string(num); 
           num=0;
        }
        else{
            if(s.size()==1){
             if(num%3==0){
            cout << result-1<<"\n"<<"YES";
            break;
            }
            else{
            cout << result-1<<"\n"<<"NO";    
            break;
            } 
            }
            else{
            if(num%3==0){
            cout << result<<"\n"<<"YES";
            break;
            }
            else{
            cout << result<<"\n"<<"NO";    
            break;
            }
            }
        }
        result+=1;
    }
return 0;
}