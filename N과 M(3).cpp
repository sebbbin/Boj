#include <iostream>

using namespace std;

int n,m;
int arr[9];
int arred[9]; // 숫자가 중복되어도 괜찮아서 사용안함

void dfs(int idx){
    if(idx ==m){
        for(int i=0; i<m; i++){
            cout <<arr[i]<<" ";
        }
        cout << "\n";
        return ;
    }
    for(int i=1; i<=n; i++){
            arr[idx]=i;
            dfs(idx+1);
    }
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    cin >>n>>m;
    dfs(0);


return 0;
}
