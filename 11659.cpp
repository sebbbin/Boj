//구간 합 구하기 4 실버 3
//누적합

#include <iostream>

using namespace std;

int main (){
ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int N,M;
    cin >> N>>M;
    int a[101010],sum[101010];
for (int i=1; i<=N; i++){
cin >>a[i];
}
for(int i=1; i<=N; i++){
  sum[i]=sum[i-1]+a[i];
}
for (int z=0; z<M; z++){
    int i,j;
    cin >>i>>j;
cout<<sum[j]-sum[i-1]<<"\n";
}
return 0;
}
