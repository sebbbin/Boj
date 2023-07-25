//덩치 실버 5
#include <iostream>
#include <algorithm>

using namespace std;

int main (){
    //두개의 덩치가 모두 커야지 덩치가 더 크다. 
    //둘중하나만 크다면 크다고 말할 수 없는..애매한
    int N;
    cin >>N;
    pair<int, int> p[N];
    for(int i=0; i<N; i++){
        cin >> p[i].first>>p[i].second;  
    }
int rank=0;
   for(int i=0; i<N; i++){ //rank를 주는데 p[i]보다 큰게 있을수록 등수가 뒤로 밀리는 것
    for(int j=0; j<N; j++){
            if(p[i].first<p[j].first&&p[i].second<p[j].second){
                rank++; 
            }
            cout <<rank;
   }
   cout <<rank<<"\n";
   rank=1;
   }
return =0;

}