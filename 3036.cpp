#include <iostream>

using namespace std;

int GCD(int a, int b){
    if(b==0) return a;
    else return GCD(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
int n; 
cin >> n;
int r1, r2,gcd;
cin >>r1;
for(int i=0; i<n-1; i++){
cin >> r2;
gcd = GCD(r1,r2);
cout << r1/gcd <<"/"<<r2/gcd <<"\n";
}

return 0;
}