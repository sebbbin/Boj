#include <iostream>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    string s;
    int n;
    cin >>s>>n;
    vector<vector<int>> cnt(26, vector<int>(s.size() + 1, 0));
    cnt[s[0] - 'a'][0]++;
    // 문자열 s에 대해 누적합 계산
    for (int i = 1; i < s.size(); ++i) {
        for (int j = 0; j < 26; ++j) {
            cnt[j][i] = cnt[j][i-1];
        }
        cnt[s[i] - 'a'][i]++;  
    }
    char word;
    int start, end;
    for(int i=0; i<n; i++){
        cin >> word>>start>>end;
        if(start==0){
            cout << cnt[word-'a'][end]<<"\n";
        }
        else{
        cout << cnt[word-'a'][end]-cnt[word-'a'][start-1]<<"\n";
        }
    }
    
    
    
return 0;
}
