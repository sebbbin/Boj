#include <iostream>
#include <algorithm>

using namespace std;


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    string num="";
    cin >> num;
    
    sort(num.begin(), num.end(), greater<char>());
    
    bool zero=0;
    long long sum =0;
    
    for(int i=0; i<num.size(); i++){
       if (num[i] == '0') {
           zero = 1;
       }
       sum +=num[i]-'0';
    }
    
    if(sum%3==0&&zero==1){
        
        cout << num;
    }
    else{
        cout << -1;
    }
    
    return 0;
}