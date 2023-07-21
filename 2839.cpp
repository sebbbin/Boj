//설탕배달 실버 4

//21 -> 15+6 if 5로 나눴을 때 1이면 31 5*N +6(최소 6) 5로 나눴을때 2 32 5*N +12(최소 12)  
//3 5*N +3 (최소 3) 4 5*N + 9 최소 9
#include <iostream>

using namespace std;

int main (){
     ios_base::sync_with_stdio(false); 
 cin.tie(nullptr); cout.tie(nullptr);
int N,count=0;
cin >> N;
while(N){
    if(N%5==0){ 
        cout << N/5;
        N=0;
    }
    else if (N%5==1){
        if (N<6){
            cout << -1;
            N=0;
        }
        else{
            count+=2;
            N-=6;
            count+=N/5;
            cout <<count;
            N=0;
        }
    }
     else if (N%5==2){
        if(N<12){
            cout << -1;
            N=0;
        }
        else{
            count+=4;
            N-=12;
            count+=N/5;
            cout <<count;
            N=0;
        }
    }
     else if (N%5==3){
        N-=3;
        count+=1;
        count+=N/5;
        cout <<count;
        N=0;
    }
     else if (N%5==4){
        if(N<9){
            cout << -1;
            N=0;
        }
        else{
            N-=9;
            count +=3;
            count+=N/5;
            cout <<count;
            N=0;
        }
    }
    count =0;
}
return 0;
}