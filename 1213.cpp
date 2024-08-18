#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    string s,result,reversed_result;
    cin >>s;
    map<char, int> m;
    int hol=0;
    char mid;
    for(int i=0; i<s.size(); i++){
        m[s[i]]++;
    }
    
    for(auto it : m){
        if(it.second%2==1){
            hol++;
            mid=it.first;
        }
    }
    
    if(hol>1){
        cout << "I'm Sorry Hansoo";
        exit(0);
    }
    
    
    for(auto it : m){
        for(int j=0; j<it.second/2; j++){
            result+=it.first;
        }
    }
    
    reversed_result = result; 
    if(hol==1){
        result+=mid;
    }
    reverse(reversed_result.begin(), reversed_result.end());
    result += reversed_result;

    
    cout << result;
    
    return 0;
}
