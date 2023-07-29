//직각삼각형 브론즈 3
//단순하게 .. 생각하지 말것 . 
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    long long A,B,C,D=0;
    cin >> A >> B >> C;
    while(A!=0 && B!=0 && C!=0){
    if(A>B){ //A랑 B랑 바꿔줌 => B>A
        D = B;
        B =A;
        A = D;
    }
    if( B>C){
        D=C;
        C=B;
        B=D;
    }
    if(C*C==A*A+B*B){
        cout << "right"<<"\n";
    }
    else {
        cout <<"wrong"<<"\n";
    }
    cin >> A >> B >> C;
    
    }

    return 0;

}