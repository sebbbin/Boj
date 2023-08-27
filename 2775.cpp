//부녀회장이 될테야 브론즈 1
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >>T;
    int k, n;
    int arr[15][15];
    for(int i=0; i<T; i++){
    cin>>k>>n; 
    if(n==1){
        cout <<1<<"\n";
    }
    else {
        for(int j=0; j<=k; j++){
        arr[j][1]=1;
        }
        for(int z=1; z<=n; z++){
            arr[0][z] = z;
        }
        for(int j=1; j<=k; j++){
            for(int z=2; z<=n; z++){
                arr[j][z]=arr[j][z-1]+arr[j-1][z];
            }
        }
        cout<< arr[k][n]<<"\n";

    }
}
return 0;

}