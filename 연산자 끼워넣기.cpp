#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int p,s, mul,m; //순서대로 더하기, 빼기,곱하기, 나누기
int n,num,sum,numsum;
int arr[101];
char k[101];
char use[101];
vector<int> vec;
int used[101];

void dfs(int idx){
    if(idx == sum){
        int z=1;
        numsum = arr[0];
        for(int i=0; i<sum; i++){
            if(use[i]=='+')
            {
                   numsum+=arr[z];
                   z+=1;
            }
            else if(use[i]=='-')
            {
                    numsum-=arr[z];
                    z+=1;
            }
            else if(use[i]=='*')
            {
                    numsum*=arr[z];
                    z+=1;
            }
            else if(use[i]=='/')
            {
                    numsum/=arr[z];
                    z+=1;
            }
        }
         vec.push_back(numsum);
         return ;
    }
    
    for(int i=0; i<sum; i++){
        if(used[i]==0){
            used[i]=1;
            use[idx] = k[i];
            dfs(idx+1);
            used[i]=0;
        }
    }
}


int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    cin>>n;
    for(int i=0; i<n; i++){
        cin >>num;
        arr[i]=num;
    }
    cin>>p>>s>>mul>>m;
    sum = p+s+mul+m;
    for(int i=0; i<p; i++){
        k[i]='+';
    }
    for(int i=0; i<s; i++){
        k[i+p]='-';
    }
    for(int i=0; i<mul; i++){
        k[i+p+s]='*';
    }
    for(int i=0; i<m; i++){
        k[i+p+s+mul]='/';
    }
    dfs(0);
  
    sort(vec.begin(), vec.end());
 
    cout << vec[vec.size()-1]<<"\n"<<vec[0];
 
return 0;
}