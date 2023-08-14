#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int sum,max=0;
    int N,M;
    cin >> N >> M;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }

    for(int i=0; i<N-2; i++){
        for(int j= i+1; j<N-1; j++){
            for(int k= j+1; k<N; k++){
                sum=arr[i]+arr[j]+arr[k];
                if(M-sum>=0&&sum>max){
                    max=sum;
                }
           
            }
        }
    }
    cout<< max;
    return 0; 
}