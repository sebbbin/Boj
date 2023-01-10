#include <iostream>
#include <algorithm>

using namespace std;

int main () {
 ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

int T=0;
int arr[100][10000]={0,};
cin >>T;
for(int i=0; i<T; i++){
for (int j=0; j<10; j++){
cin>>arr[i][j];
}
}

int arrsort[100][100000]={0,};

for(int i=0; i<T; i++){
for(int j=0; j<10; j++){
for(int k=0; k<10; k++){

if(arr[i][k]>arr[i][k+1]){
arrsort[i][k+1]=arr[i][k];
arrsort[i][k]=arr[i][k+1];}

}
}
}
for(int i=0; i<T; i++){
cout<<arr[i][7]<<endl;

}
return 0;
}