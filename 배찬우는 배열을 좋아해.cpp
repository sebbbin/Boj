#include <bits/stdc++.h>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    
    int n,m,q; //행 열 쿼리
    cin >>n>>m>>q; 
    vector<vector<int>> v(n, vector<int>(m));
    vector<int> temp(m);//swap을 위한 1차원 임시 배열
    
    //배열을 다 받음 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        cin >>v[i][j];
        }
    }
    
    int a,b,c,d;
    
    for(int i=0; i<q; i++){
        cin >>a; //0또는 1
        if(a==0){
           cin >> b>>c>>d; 
            v[b][c]=d;
        }
        else if(a==1){
            cin >>b>>c;
           swap(v[b],v[c]);
        }
    }
    
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
        cout << v[i][j]<<" ";
        }
        cout <<"\n";
    }
    
    return 0;
}