//좌표정렬하기 실버 5

#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >> N;
    int arr[N];
    for (int i=0; i<N; i++){
        cin >>arr[i];
    }
    sort(arr, arr+N);
    for (int i=0; i<N; i++){
        cout<<arr[i]<<"\n";
    }
    return 0;
}