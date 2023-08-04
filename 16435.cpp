//스네이크버드 실버5
#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N, L=0;
    cin >> N >> L;
    vector<int> H(N);
    for(int i=0; i<N; i++){
        cin >> H[i];
    }
    sort(H.begin(), H.end());
    for(int i=0; i<N; i++){
        if(H[i] < L || H[i] ==L){
            L++;
        }
        else{
            continue;
        }
    }
    cout << L;

return 0;
}