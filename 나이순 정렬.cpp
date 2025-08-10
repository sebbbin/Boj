#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<int, string> p1, pair<int, string> p2){
    return p1.first < p2.first;
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    //나이가 같으면 가입한 순인데 이름 순이라고 착각함 .. ;;
    int n=0;
    cin >>n;
    vector<pair<int,string>> v;
    int age=0; 
    string name="";
    for(int i=0; i<n; i++){
       cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    
    stable_sort(v.begin(), v.end(), compare);
    
    for(int i=0; i<n; i++){
        cout<< v[i].first <<" "<< v[i].second <<"\n";
    }
    
    return 0;
}
