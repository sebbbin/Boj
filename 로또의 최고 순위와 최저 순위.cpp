#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int cnt_num=0;
    int cnt_zero=0;
    for(int i=0; i<lottos.size(); i++){
        if(lottos[i] ==0){
            cnt_zero++;
        }
    }
    for(int i=0; i< lottos.size(); i++){
        if(lottos[i]==0){continue;}
        for(int j=0; j<win_nums.size(); j++){
            if(lottos[i]==win_nums[j]){
                cnt_num++;
            }
        }
    }
    int cnt_win = cnt_num+cnt_zero;
    if(cnt_win == 6){
        answer.push_back(1);
    }
    else if(cnt_win == 5){
        answer.push_back(2);
    }
     else if(cnt_win == 4){
        answer.push_back(3);
    }
     else if(cnt_win == 3){
        answer.push_back(4);
    }
     else if(cnt_win == 2){
        answer.push_back(5);
    }
    else{
        answer.push_back(6);
    }
    
    if(cnt_num == 6){
        answer.push_back(1);
    }
    else if(cnt_num == 5){
        answer.push_back(2);
    }
     else if(cnt_num == 4){
        answer.push_back(3);
    }
     else if(cnt_num == 3){
        answer.push_back(4);
    }
     else if(cnt_num == 2){
        answer.push_back(5);
    }
    else{
        answer.push_back(6);
    }
    return answer;
}