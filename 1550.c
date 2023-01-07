#include<stdio.h>

int main()
{
	int num;
	scanf("%X", &num);  //int값을 부호없는 16진수로 출력  10~15은  'A'~'F'로 표시
	printf("%d", num); 
	return 0;
}