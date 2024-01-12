#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

int n;
cin >>n;
int arr[n];
for(int i=0; i<n; i++)
{
    cin >>arr[i];
}
sort(arr, arr+n);
int result = 0;
if(n==1){
    result = arr[0]*arr[0];
}
else{
    result = arr[0] *arr[n-1];
}

cout << result;
return 0;

}