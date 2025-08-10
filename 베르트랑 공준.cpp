#include <iostream>
#include <cmath>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
   
    int n;
    while(1){
        cin >> n;
        if(n==0){
            break;
        }
        int arr[250000]= {0,};
        for(int i=2; i<=2*n;i++){
            arr[i]=i;
        }
        
        for(int i=2; i<=sqrt(2*n); i++){
            if(arr[i]==0){
                continue;
            }
            for(int j= i*i; j<=2*n; j+=i){
                arr[j] =0;
            }
        }
        int cnt=0;
        for(int i=n+1; i<=2*n; i++){
            if(arr[i]!=0){
                cnt+=1;
            }
        }
        cout << cnt << "\n";
    }
    
    return 0; 
    
    
}