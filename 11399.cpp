//ATM 실버 4
//1~N i번 사람이 돈을 인출 P

#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N,sum=0;
    cin >>N;
    int arr[N];
    for(int i=0; i<N; i++)
    {
        cin >>arr[i];
        
    }  
    sort (arr, arr+N);
    for(int j=0; j<N; j++)
    {
        sum+=arr[j]*(N-j);
    }
    cout <<sum;
    
return 0;
}