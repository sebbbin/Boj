//1267 브3 핸드폰 요금 기초 코드 작성 요령2
#include <iostream>

using namespace std; 


int main() {
 
//영식 -> 30초마다 10원 1~30 10원
//만식 -> 60초마다 15원

int y=0, m=0;
int n, sec=0;
cin >> n;
for(int i=0; i<n; i++){

cin >> sec;

if(sec!=0){
y+=((sec/30)+1)*10;
m+=((sec/60)+1)*15;
}
}

if(y>m){
cout << "M "<<m;
}
else if(y<m){
cout << "Y "<<y;
}

else{

cout <<"Y M "<<y;

}

return 0;

}
