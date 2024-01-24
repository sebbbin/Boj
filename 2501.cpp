#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int a,b;
cin >> a >> b;
int arr[100000]={0,};
int k=0;

for(int i=1; i<=a; i++){
if (a%i == 0){
        arr[k]=i;
        k++;
}
else
continue;
}

cout << arr[b-1];

return 0;


}