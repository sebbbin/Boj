#include <iostream>
#include <cmath>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    
    int t=0;
    cin >> t;
    
    double x=0, y=0;
    double answer=0;
    for(int i=0; i<t; i++){
        cin>>x>>y;
       long long k = sqrt(y-x); //몇제곱인지
       if((y-x) == k*k)
       {
           answer = 2*k-1;
       }
       else if((((k*k)+((k+1)*(k+1)))/2)>=(y-x)&&((y-x)>(k*k))){ //k*k == k^2
           answer= 2*k;
       }
       else if((((k*k)+((k+1)*(k+1)))/2)<(y-x)&&((y-x)<((k+1)*(k+1)))){
           answer = 2*k+1;
       }
    cout << answer<<"\n";
    }
    return 0; 
}
