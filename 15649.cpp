//N과 M(1) 실버 3

#include <iostream>
#include <stdio.h>

using namespace std;

int N,M,A[8],U[9];


void f(int choose){
    if (choose ==M){
        for (int i=0; i<M; i++) 
            cout<<A[i]<< ' ';
        cout<<'\n';
        return ;
    }
    for(int i=1; i<=N; i++){
        if(!U[i]){
            A[choose]=i; U[i]=1;
            f(choose+1);
            A[choose]=0; U[i]=0;
        }
    }
}

int main (){
 cin >>N>>M;
f(0);
return 0;
}