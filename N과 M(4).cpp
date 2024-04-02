#include <iostream>

using namespace std;

int n,m;
int arr[9];

void dfs(int idx){
    if(idx == m){
        for(int i=0; i<m; i++){
            cout << arr[i] <<" ";
        }
        cout <<"\n";
        return ;
    }
    
    for(int i=1; i<=n; i++){
        if(arr[idx-1]<=i)
        {arr[idx] = i;
        dfs(idx+1);
        }
        
    }
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);


    cin>>n>>m;
    dfs(0);

return 0;
}