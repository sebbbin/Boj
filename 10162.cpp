#include <iostream>
#include <string>
using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
	cin.tie(nullptr); 
	cout.tie(nullptr);
    int A=300;
    int B =60;
    int C=10;
    int T=0;
    int resultA =0;
    int resultB =0;
    int resultC =0;
    cin >> T;
   
   if(T%C!=0){
    cout<<"-1";
   }
   else{
    resultA= T/A;
    resultB= (T%A)/B;
    resultC =((T%A)%B)/C;
    cout<<resultA<<" "<<resultB<<" "<<resultC;
   }
    

return 0;
    }