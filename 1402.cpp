#include <iostream>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);
int t;
cin >> t;
int a, b;
int r1, r2;
while(t--){
cin >> a >> b;
for(int i=1; i<b/2+1; i++){
r1 = i;
r2 = b-r1;
if(a == r1*r2){
cout << "yes"<<"\n";
break;
}
if(i==b/2){
    cout << "no"<<"\n";
}
}
}

return 0;
}