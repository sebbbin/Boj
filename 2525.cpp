//오븐 시계 브론즈 3

#include <iostream>

using namespace std;

int main (){

    int H,M;
    cin >> H >> M;
    int N,K;
    cin >>N;
    K = 60*H+M+N;
    while(K>=1440)
    {
        K-=1440;
    }
    cout << K/60<<" "<<K%60;
    return 0; 
}