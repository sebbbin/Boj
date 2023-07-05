//개수세기 브론즈 5

#include <stdio.h>

int main (){
    int N,M;
    scanf("%d",&N);
    int arr[N];
    for (int i=0; i<N; i++){
        scanf("%d", &arr[i]);
    }
    int v=0;
    scanf("%d",&v);
    for (int i=0; i<N; i++){
        if(arr[i]==v){
            M++;
        }
    }
    printf("%d",M);

    return 0;
}