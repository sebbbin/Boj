//셀프 넘버 실버 5
#include <iostream>
#include <algorithm>

using namespace std;

int self_number(int number) {
    int sum = number;  // 초기값을 number로 설정

    while (number > 0) {
        sum += number % 10;  // 현재 자리수의 값을 더함
        number /= 10;  // 다음 자리수로 이동
    }

    return sum;
}


int main (){
ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
bool arr[10001] = {false};

for(int i=1; i<= 10000; ++i){
    int result = self_number(i);

    if(result <=10000)
    arr[result]=true;
}
for(int i=1; i<=10000; ++i){
    if(!arr[i])
    cout<<i<<"\n";
}

return 0;
}