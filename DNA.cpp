#include <iostream>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n=0, m=0; 
    cin >>n>>m;
    int arr[91]={0,}; //대문자 아스키코드 넣을 예정
    char dna[1001]; // 가장 많은 문자 넣는 배열
    vector<string> v;
    string s;
 
    for(int j=0; j<n; j++){
        cin >>s;
        v.push_back(s);
    }
    //dna 찾기
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
             arr[(int)v[j][i]]++;
        }
        int maxValue=arr[65];
        int maxIndex=65;
        for(int j=66; j<91; j++){
            if(arr[j]>maxValue){
                maxIndex = j;
                maxValue = arr[j];
            }
        }
        dna[i] = (char)maxIndex;
        for(int k=65; k<91; k++){
            arr[k] = 0;
        }
    }
    int sum =0; 
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(dna[j]!=v[i][j]){
                sum+=1;
            }
            else{
                continue;
            }
        }
    }

    for(int i=0; i<m; i++){
        cout <<dna[i];
    }
    cout << "\n"<<sum;
    
    
return 0;
}