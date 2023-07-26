//별 찍기 -7 브론즈 3
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N;
    cin >>N;
    for(int i = 1; i <=N; i++)
    {
        for(int j=N-i; j>0;j--){
            cout <<" ";
        }
        for(int k=0; k<2*i-1;k++){
            cout <<"*";
        }
        cout <<"\n";
    }
    for(int i=1; i<N;i++){
        for(int j=0; j<i;j++){
            cout <<" ";
        }
        for(int k=2*(N-i)-1; k>0;k--){
            cout <<"*";
        }
        cout <<"\n";

    }
    return 0;
}