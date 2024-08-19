#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int t, n;
    cin >> t;
    string cloth, category;

    while(t--){
        map<string, int> m;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> cloth >> category;
            m[category]++;
        }

        int result =1;
        for(auto it : m){
            result*=(it.second+1);
        }
        
        result -=1;

        cout << result << "\n";
    }
    return 0;
}
