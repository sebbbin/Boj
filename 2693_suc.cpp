#include <iostream>
#include <algorithm>

using namespace std;

int main () {
 ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

int T=0;
int arr[10000]={0,};
cin >>T;
for(int i=0; i<T; i++){
for (int j=0; j<10; j++){
cin>>arr[j];}
sort(arr,arr+10);
cout<<arr[7]<<endl;

}

return 0;
}
