//슈벨롭 알고리즘 문제 
//접미사 배열 실버 4

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    string S;
    vector<string> v;
    cin >>S;
     for (int i = 0; i < S.size(); i++) {
            v.push_back(S.substr(i, S.size()));
    }
    sort(v.begin(), v.end());
    
    for (int i = 0; i < S.size(); i++) {
        cout << v[i] << "\n";
    }

}
