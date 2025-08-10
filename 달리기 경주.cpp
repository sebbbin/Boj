#include <string>
#include <vector>
#include <map>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    map<string,int> m;
    // players 벡터를 map에 추가
    for (int i = 0; i < players.size(); i++) {
        m[players[i]] = i;
    }
    
   // callings 벡터에 따라 players의 이전 인덱스 값 증가
    for (int i = 0; i < callings.size(); i++) {
        int locate = m[callings[i]];
            m[callings[i]] -= 1;
            m[players[locate - 1]] += 1;
            swap(players[locate], players[locate - 1]); 
        
    }
    return players;
}