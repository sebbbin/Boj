//나이순 정렬 실버 5
#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

bool compare (pair<int, string> a, pair<int,string> b){
    return a.first < b.first;
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >> N;
    vector<pair<int,string>> v(N);
    for(int i=0; i<N; i++){
        cin >> v[i].first >> v[i].second;
    }
    
    stable_sort(v.begin(),v.end(), compare);
    
    for(int i=0; i<N; i++){
        cout << v[i].first <<" "<< v[i].second<<"\n";
    }
    return 0;
}