//구간 합 구하기 4 실버 3

#include <iostream>

using namespace std;

int main (){
ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int N,M;
    cin >> N>>M;
    int a[1010101] = {0};
for (int i=0; i<N; i++){
cin >>a[i];
}
int sum =0;
for (int z=0; z<N; z++){
    int i,j;
    cin >>i>>j;
    for(int k=i-1; k<j; k++)
      {  
        sum += a[k];
        }
cout<<sum<<endl;
sum=0;

}
return 0;
}
