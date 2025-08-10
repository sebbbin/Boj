#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n,x,cnt;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    cin >> x;
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        int sum;
        for(int j = i+1; j <n; j++){
        sum = v[i] + v[j];
        if(sum == x){
            cnt++;
        }
        else {
            continue;
        }
        }
    }
    cout << cnt;
    return 0;
}