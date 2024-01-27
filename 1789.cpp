#include <iostream>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

long long input;
cin >> input; 

long long sum=0, num=1;

while(1){
    if(input<sum){
        break;
    }
    sum+=num;
    num++;
}

cout << num-2;

return 0;

}