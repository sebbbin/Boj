#include <iostream>
#include <algorithm>

using namespace std;

int N=8;
int arr[1000001];
int arrsort[100000];

int main(){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    for(int i=0; i<N; i++) 
    {cin >> arr[i];
    arrsort[i]=arr[i];
    }

    sort(arrsort, arrsort+N);

int result=0;
    for(int j=0; j<5; j++){
        result+=arrsort[7-j];
    }
    cout<<result<<endl;

	int resultnum[5]={0,};		
    for(int k=0; k<5; k++)
    {
   
       for(int z=0; z<8; z++){
	if(arrsort[7-k]==arr[z]){
	resultnum[k]=z+1;

}
}
       
    }
sort(resultnum,resultnum+5);
for(int a=0; a<5; a++){
cout<<resultnum[a]<<" ";
}

return 0;
}