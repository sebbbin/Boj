//동전 0 실버 4
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int N,K;
    cin >>N>>K;
    int A[N];
    for (int i=0; i<N; i++){
        cin >> A[i];
    }
    int n=0;
    for(int i=N-1; i>=0; i--){
        if(K>=A[i]){ //4200 1000 
        n+=K/A[i]; //4번
        K=K%A[i]; //200
        }
    }
    cout << n;
return 0;
}