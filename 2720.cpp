#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);


int q = 25, d = 10, n= 5, p = 1;
int qr=0, dr=0, nr=0, pr=0;

int t, money=0;
cin >>t;

for(int i=0; i<t; i++) {
cin >> money; 
qr = money/q; 
money-=(money/q)*q;
dr = money/d;
money-=(money/d)*d;
nr = money/n;
money-=(money/n)*n;
pr = money;
cout << qr << " " << dr << " " << nr << " " <<pr<<"\n";
}


return 0;
}