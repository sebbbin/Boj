//10093 브2 숫자 기초 코드 작성 요령2
#include <iostream>
#define ull unsigned long long

using namespace std; 


int main() {
ull a,b; //input범위가 1 ≤ A, B ≤ 10^15 이므로 unsigned long long 형으로 선언

cin >> a>>b;
if(a>b){

ull temp = b;
b=a;
a= temp;	
}

if(a==b){
cout <<0<<"\n";

}

else {
cout << b-a-1<<"\n";
for( ull i =a+1; i<b; i++)
{			
	if (i == b - 1) cout << i;			
	else cout << i << " ";		
}

}

return 0;

}
