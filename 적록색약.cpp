#include <bits/stdc++.h>

using namespace std;

char board[101][101];
int n;
int dx[4]= {0,1,-1,0};
int dy[4]= {-1,0,0,1};
queue<pair<int,int>> q;
bool vis[101][101];
int num=0;  //기본
int saeknum=0; //적록색약개수

void bfs(int a, int b){
    
    q.push({a,b});
    vis[a][b]=1; //방문함
    
    while(!q.empty()){
        int y=q.front().first;
        int x=q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
          int ny = y+dy[i];  
          int nx = x+dx[i];
            if(ny>=0 &&ny<n&&nx>=0 &&nx<n){
                if(!vis[ny][nx]&&board[ny][nx]==board[y][x]) //같은 색인지 보기
                {
                    vis[ny][nx] =1;
                    q.push({ny,nx});
                }
            }
        }
    }
}

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >>n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> board[i][j];
            vis[i][j]=0;
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(!vis[i][j])
           {
               bfs(i,j);
               num++;
           }
        }
    }
    
    memset(vis, false, sizeof(vis)); // 방문 배열 초기화
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(board[i][j] == 'G'){
                board[i][j] = 'R'; //색 넣기
            }
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
           if(!vis[i][j])
           {
               bfs(i,j);
               saeknum++;
           }
        }
    }
    
    cout << num << " " <<saeknum;
    
return 0;
}
