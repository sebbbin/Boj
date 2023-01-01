#include <stdio.h>

int main (){
    int A,B,C;
    scanf("%d\n%d\n%d",&A,&B,&C);
    int multi = A*B*C;
    int arr[10] ={0,};
    int num =0;

while(multi>0){
    num = multi%10;
    arr[num]++;
    multi = multi/10;
}
for(int i =0; i<10; i++){
    printf("%d\n", arr[i]);
}
return 0;
}