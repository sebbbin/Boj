//수들의 합 2 실버 4
#include <iostream>

using namespace std;

int main()
{
    int a,b;
    int sum=0, num=0;
    int arr[101010];
    cin>> a>>b;
    for(int i=0; i<a; i++){
        cin>>arr[i];
    }
    
    for(int j=0; j<a; j++){
        for (int k=0; k+j<a; k++){
            sum += arr[j+k];
            if(sum == b){
                num++;}
            if(sum >b){
                break;}
        }
        sum = 0;
    }
    
    cout<<num;
  
   return 0;
}
