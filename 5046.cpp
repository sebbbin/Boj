#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int n =1;//참가자수 
double b =0; //예산
int h=1;
int w=1;
int p,a,k;
int pos;
int minP= 600000;

cin >>n>>b>>h>>w;

for(int i=0; i<h; i++){
    cin >>p;
    for(int j=0; j<w; j++){
        cin >> a;
        if(a<n){
            continue;
        }
        pos = p * n;
        if(b<pos){
            continue;
        }
        minP = min(minP, pos);
    }
}

if(minP==600000){
    cout << "stay home";
}
else{
    cout << minP;
}

return 0;
}