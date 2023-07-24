//ACM 호텔 브론즈 3
//W개의 방, H층 건물 HxW형태의 호텔
//Y는 신경쓰지 않음 그냥 xx가 (엘리베이터에서 얼마나 떨어져있는지 ) 중요하다.
//그러니깐 일단 1에다가 다 배정 -> 2에 배정 하는 식
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int num =0;

    cin >> num;
    int H,W,N;
    for (int i=0; i<num; i++){
        int result=0;
        cin >> H>>W>>N;
        //N%H => 4 층 몇층인지 => 나머지가 영이면 그냥 H가 높이
        //N/H => 몇호인지 
        if(N%H==0){
        result=H*100+N/H;
            }
        else{
       result=(N%H)*100+(N/H)+1;
     
    }
      cout <<result<<"\n";
    }
return 0;
}