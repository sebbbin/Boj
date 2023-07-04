//N과 M (2) 실버 3

#include <iostream>
#include <stdio.h>
#include <algorithm>

using namespace std;

int N,M,A[8],U[9];


void f(int choose){
    if (choose ==M){
        for (int i=0; i<M; i++) 
            { 
            cout<<A[i]<< ' ';}
        cout<<'\n';
        return ;
    }
    for(int i=1; i<=N; i++){
        if(choose==0 || A[choose-1]<i){
            A[choose]=i; //choose -> 1부터 점차 상승
            f(choose+1);
        }
        
    }
}

int main (){
cin >>N>>M;
f(0);
return 0;
}