#include <bits/stdc++.h>

using namespace std;

//그니깐 y로 -1 / 1 이랑 x로 -1/1을 다 검증 해봄 즉 4번
int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1}; // 상하좌우 네 방향을 의미
int board[5][5];
bool vis[5][5];
int r,c; //시작 위치

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int num =0; //방문횟수
    queue<pair<int, int>> q;//방문한 노드
    
    //초기값을 다 넣어줌
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> board[i][j];
            vis[i][j] =0; //초기화
        }
    }
    
    cin >>r>>c;
    q.push({r,c}); //여기서 부터 시작
    while(!q.empty()){
        int size = q.size();
        //한 턴이라고 생각하면 됨. for문이 방문 턴 for문 한 번 끝나면 num 증가
        for(int i=0; i<size; i++){
            //(y,x)로 되어있음
            int x = q.front().second;
            int y = q.front().first;
            q.pop();
            if(board[x][y]==1){ //목표지점일시 
                cout << num;
                return 0; //종료
            }
            
            for(int k=0; k<4; k++){
               int ny = y+dy[k]; 
               int nx = x+dx[k];
               if(ny>=0&&ny<=4&&nx>=0&&nx<=4){
                   if(board[ny][nx]!=-1&&vis[ny][nx]!=1)
                   {
                       vis[ny][nx]=1;
                       q.push({ny,nx});
                   }
                 }
               }
            }
        num++;
    }
    //목표 지점 찾으면 종료 되어야 하는데 while문 끝나도 종료가 안되어 있으면 목표 지점 달성 못한거니깐 -1 출력!
    cout << -1;

return 0;
}