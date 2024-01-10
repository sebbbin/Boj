#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

int N, num=0;
cin >> N;
vector<int> vec(N);
for(int i=0; i<N; i++){
    cin >> vec[i];
}

sort(vec.begin(), vec.end());
cout << vec[0]<<" ";
for(int i=1; i<N; i++){
    if(vec[i-1]==vec[i]){
        continue;
    }
    cout << vec[i]<<" ";
}



return 0;

}