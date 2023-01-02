#include <stdio.h>

int main (){
    int a;
    int b;
    int result=0;

    scanf("%d",&a);
    int arr[1000]={0,};
    for(int i=0; i<a; i++){
        scanf("%d",arr[i]);

    }
    scanf("%d", &b);
    
    for(int j=0; j<a; j++){
    if(b==arr[j])
    result++;}
    return 0;
  }