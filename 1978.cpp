//소수 찾기 브론즈 2

#include <iostream>

using namespace std;

int main (){

int N,A;
cin >>N;
int count, cnt=0;
for (int i=0; i<N; i++){
    cin >>A;
    for (int j=1; j<=A; j++){
        if (A%j==0){
            count ++;
        }
    }
    if(count ==2)
    cnt++;
    count =0;
}
cout << cnt;
return 0;


}