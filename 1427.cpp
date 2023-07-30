//소트인사이드 실버 5
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    string str;
    cin >> str;
    sort(str.begin(), str.end(), greater<char>());
    cout <<str;

    return 0;
}