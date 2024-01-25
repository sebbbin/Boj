#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int a, b, v;
cin >>a >>b >>v;
int day=1;

if((v-a)%(a-b) == 0){
    day += (v-a)/(a-b);
}
else if((v-a)%(a-b) != 0){
    day += (v-a)/(a-b)+1;
}

cout << day;





}