#include <iostream>

using namespace std;

int main (){

    int N=0;
int num=0;
int sum=0;
    cin >>N>>num;
int a,b;
for(int i=0; i<num; i++){
cin >>a>>b;
sum+=a*b;
}

if (N==sum){
cout<<"Yes";

}
    else{
cout<<"No";
}
}