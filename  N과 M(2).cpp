#include <iostream>

using namespace std;

int n, m; 
int arr[9];
int arred[9];

void bfs(int idx){
    if(idx == m){
        for(int i=0; i<m;i++){
            cout << arr[i] <<" ";
        }
        cout << "\n";
        return ;
    }
    
    for(int i=idx+1; i<=n; i++){
      if(arred[i]==0&&arr[idx-1]<i){
          arr[idx] =i;
          arred[i] =1;
          bfs(idx+1);
          arred[i]=0;
      }
    }
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    cin >>n>>m;
    bfs(0);

    return 0;
}