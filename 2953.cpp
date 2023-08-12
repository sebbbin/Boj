//나는 요리사다 브론즈 3
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
  int  arr[5][4] = {0,};
    int sum[5] = {0,};
    int temp[5] = {0,};

  for( int i=0; i<5; i++){
    for(int j=0; j<4; j++){
        cin >> arr[i][j];
    }
    for(int j=0; j<4; j++){
        sum[i]+=arr[i][j];
    }
  }
    for(int i=0; i<5; i++){
    temp[i] = sum[i];
    }
    sort(sum, sum+5);
    for(int i=0; i<5; i++){
    if(temp[i] == sum[4])
    {
        cout << i+1<<" "<<sum[4];
    }
    else 
    continue;
    }
    return 0;
}