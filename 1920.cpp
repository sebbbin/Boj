//수 찾기 실버 4
//이분탐색

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;

int  n, m=0;
int A[10101010]={0,};
int temp;

void binary_search(int x)
{
int l =0;
int r =n-1;
int mid;
    while(r>=l){
        mid=(l+r)/2;
        if(x==A[mid]){
            cout<<1<<"\n";
            return ;
        }
        else if(x>A[mid]){
            l=mid+1;
        }
        else{
            r=mid-1;
        }
    }
    cout<<0<<"\n";
    return ;
}

int main (){
ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
cin >>n;
for(int i=0; i<n; i++){
    cin>>A[i];
}
sort(A, A+n);
cin >>m;
for(int i=0; i<m; i++){
cin>>temp;
binary_search(temp);
}
return 0;
}