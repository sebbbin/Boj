#include <iostream>
#include <cmath>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int d,h,w;
cin >> d >> h >> w;
double r = sqrt( w * w + h * h);
double resultW = d * w / r;
double resultH = d * h / r;
//sqrt : 제곱근을 구할때 쓰는 함수
cout << (int)resultH << " " << (int)resultW;


}