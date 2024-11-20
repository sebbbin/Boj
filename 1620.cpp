#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n,m;
    cin >> n >>m;
    vector<string> s(n);
    map<string,int> poket;
    for(int i=0; i<n; i++){
        cin >> s[i];
        poket[s[i]]=i+1;
    }
    
    string problem;
    
    for(int i=0; i<m; i++){
        cin >> problem;
        if( isdigit(problem[0])){
            int k = stoi(problem);
            cout << s[k-1]<<"\n";
        }
        else{
            cout << poket[problem]<<"\n";
        }
    }

    return 0;
}