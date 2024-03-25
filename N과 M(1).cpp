#include <iostream>

using namespace std;

int n, m; 
int arr[9];
int arred[9];

void dfs(int idx){
    if(idx == m){
        for(int i=0; i<m;i++){
            cout << arr[i] <<' ';
        }
        cout << "\n";
        return ;
    }
    
    for(int i=1; i<=n; i++){
      if(arred[i]==0){
          arr[idx] =i;
          arred[i] =1;
          dfs(idx+1);
          arred[i]=0;
      }
    }
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    cin >>n>>m;
    dfs(0);

    return 0;
}