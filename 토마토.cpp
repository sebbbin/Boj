#include <bits/stdc++.h>

using namespace std;

int dx[4]={0,1,-1,0};
int dy[4]={-1,0,0,1};
int tomato[1001][1001];
bool vis[5][5]; //이용할 시 예제 4번 처리하기가 너무 복잡해짐
int way[1001][1001];
int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n,m,x,y,num=0;
    cin>>n>>m;
    queue<pair<int,int>> q;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> tomato[i][j];
            if(tomato[i][j]==1){
                q.push({i,j});
            }
        }
    }
    
    while(!q.empty()){
        int size= q.size();
        for(int i=0; i<size; i++){
            int y=q.front().first;
            int x=q.front().second;
            q.pop();
            for(int k=0; k<4; k++){
                int ny = y+dy[k];
                int nx = x+dx[k];
                if (0 <= ny && ny < m && 0 <= nx && nx < n) {
    				if (tomato[ny][nx] == 0) {
    					tomato[ny][nx] = tomato[y][x]+1;
    					q.push({ny, nx});
    				}
			     }
            }
        }
    }

    for(int i=0; i <m; i++){
        for(int j=0; j<n; j++){
            if(tomato[i][j]==0){ //아직 안 익은 토마토가 있는 경우 
                cout << -1; 
                return 0;
            }
            if(num < tomato[i][j]){
                num=tomato[i][j];
            }
        }
    }
    
    cout << num-1;
    
return 0;
}