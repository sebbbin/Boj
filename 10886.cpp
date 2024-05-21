#include <bits/stdc++.h>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n;
    cin >> n;
    int arr[2]={0,};
    int num;
    
    while(n--){
        cin >> num;
        arr[num]++;
    }
  
  if(arr[0]>arr[1]){
      cout << "Junhee is not cute!";
  }
  else{
      cout <<"Junhee is cute!";
  }
    
return 0;
}