//숫자 카드 실버 5
//이분탐색
#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N, M; 
    cin >>N;
    double arr1[N], result[1010101]={0, };
    for (int i = 0; i < N; i++)
    {
        cin >> arr1[i];
    }
    cin >> M;
	double arr2[M];
    for(int i=0; i<M; i++){
        cin >> arr2[i];
    }
    sort(arr1, arr1+N);
    for(int i=0; i<M; i++){
        int r = N-1;
        int l= 0;
        while (l<=r){
            int mid = (r+l)/2;
            if(arr1[mid]==arr2[i]){
                result[i]=1;
                break;
            }
            if(arr1[mid]>arr2[i]){
                r = mid-1;
            }
            else{
                l=mid+1;
            }
        }
    }
    for (int i=0; i<M; i++){
        cout<<result[i]<<' ';
    }
    return 0;
}