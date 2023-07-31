//1,2,3 더하기
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int T;
    cin >>T;
    int arr[1010];
    arr[1] = 1; //1일경우 1
    arr[2] = 2; //1일경우 1
    arr[3] = 4; //1일경우 1
    for(int i=0; i<T; i++){
        int n,count=0;
        cin >> n;
        // 1=> 1, 2=> 2, 3=> 4, 4=> 7 '' 
        // d[i] = d[i-3]+d[i-2]+d[i-i]
        for(int j=4; j<=n; j++){
            arr[j]=arr[j-1]+arr[j-2]+arr[j-3];
        }
        cout << arr[n]<<"\n";
    }

    return 0;
}