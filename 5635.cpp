#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

bool compare(const pair<string, int>& a, const pair<string, int>& b) {
    return a.second < b.second; // 두 번째 요소를 기준으로 정렬
}

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int n;
cin >> n;
vector<pair<string, int>> v(n);
int d,m,y;

for(int i=0; i<n; i++){
    cin >> v[i].first;
    cin >> d>>m>>y;
    v[i].second = y*365+m*12+d;
}
 
sort(v.begin(), v.end(), compare);
cout << v[n - 1].first << "\n" << v[0].first;


return 0;
}