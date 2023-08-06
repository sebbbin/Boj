//25305 커트라인 브론즈 2
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N,k,temp;
    cin >> N >> k;
    int arr[N];
    for(int i=0; i<N; i++){
    cin >> arr[i];
    }
    for(int i=1; i<=N; i++){
    if(arr[i] >arr [i-1]){
        temp = arr[i-1];
        arr[i-1]= arr[i];
        arr[i] = temp;
    }
    else {
        continue;
    }
    }
    cout <<arr[N-k];
    return 0;
}