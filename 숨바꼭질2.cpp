#include <bits/stdc++.h>

using namespace std;

//1차원 BFS

int n,k;
int dist[100001]; //위치
int way[100001]; //방법의 수

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    cin >> n>>k;
    queue<int> q;
    q.push(n);
    fill(dist, dist+100001, -1); // -1로 다 초기화 시키기
    dist[n] =0;//시작점
    way[n] =1; //맨 처음 방법 1

    while(!q.empty()){
        n=q.front();
        q.pop();
        int next[3] = {n-1 , n+1, 2*n};
        for(int i=0; i<3; i++){
            if(next[i]>=0&&next[i]<100001){ //가능한 범위일 시
                if(dist[next[i]]==-1){ //방문 안했으면
                    dist[next[i]]= dist[n]+1;
                    way[next[i]]=way[n];
                    q.push(next[i]);
                }
                else if(dist[next[i]]== dist[n]+1){
                     way[next[i]]+=way[n];
                }
            }
        }
    }

    cout << dist[k] <<"\n"<<way[k];

return 0;
}