#include <iostream>

using namespace std;

int gcd(long long int a, long long int b){ 
    if(b==0) return a;
    return gcd(b, a%b);
}

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    long long int x=0,y=0;
    cin >> x>>y;
    long long int num = gcd(x,y);
    cout << x*y/num;
    
    return 0;
}
