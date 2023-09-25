//좌표 정렬하기 2 실버 5
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >>N;
    int a,b;
    vector<pair<int, int>> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i].second>>v[i].first;
    }
    
    sort(v.begin(), v.end());
     for(int i=0; i<N; i++){
        cout << v[i].second<<" "<<v[i].first<<"\n";
    }
}