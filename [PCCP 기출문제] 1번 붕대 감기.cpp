#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> bandage, int health, vector<vector<int>> attacks) {
    int acsize= attacks.size(); 
    int maxtime = attacks[acsize-1][0];
    int blood = health;
    int seqtime=0;
    int j=0; 
    for(int i=1; i<=maxtime; i++){
        if(attacks[j][0]==i){
            blood-=attacks[j][1];
            j++;
            if(blood<=0){
             blood=-1;
             break;
        }
            seqtime=0; 
        }
        else{
            //이부분 blood = min(blood+bandage[1], health)로 간단히 작성 가능
        if(blood+bandage[1]<=health){
            blood+=bandage[1];
            seqtime+=1;
        }
        else{
            blood=health;
            seqtime+=1;
        }
        if(seqtime == bandage[0]){
            if(blood+bandage[1]<=health){
            blood+=bandage[2];
            }
            else{
                blood=health;
            }
            seqtime=0;
        }
        }
        
       
        cout << blood <<" ";
    }
    return blood;
}