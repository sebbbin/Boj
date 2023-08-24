//로프 실버4
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >> N;
    int arr[N];
    for(int i=0; i<N; i++){
        cin >> arr[i];
    }
    sort(arr, arr+N, greater<int>());
    long long result=0;
    for(int i=0; i<N; i++){
       long long sum = arr[i]*(i+1);
        if(sum>result){
            result = sum;
        }
    } 
    cout << result;
    return 0;

}