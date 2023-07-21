//베스트셀러 실버 4
//map이라는 STL을 배움 for (auto)잘 이용해볼것.
#include <iostream>
#include <map>
#include <string>

using namespace std;

int main(){
 ios_base::sync_with_stdio(false); 
 cin.tie(nullptr); cout.tie(nullptr);
map<string, int> m;

int N, count =0;
cin >>N;
while(N--){
    string book;
    cin >> book;
    m[book]++;
}

for (auto i : m){
    count = max(count,i.second);
}
for (auto i:m){
if(i.second == count){
    cout <<i.first;
    return 0;
}
}
return 0;

}