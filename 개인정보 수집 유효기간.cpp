#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;

    int y=0, m=0, d=0; 
    int today_y = stoi(today.substr(0,4));
    int today_m = stoi(today.substr(5,7));
    int today_d = stoi(today.substr(8,10));
    int today_num = (today_y-2000)*12*28+(today_m-1)*28+(today_d-1);
    //최소날짜에서 몇 일이 지났는지를 계산
    for(int i=0; i< privacies.size(); i++){
        y=0, m=0, d=0; 
        y = stoi(privacies[i].substr(0,4));
        m = stoi(privacies[i].substr(5,7));
        d = stoi(privacies[i].substr(8,10));
        for(int j=0; j<terms.size(); j++){
        if(privacies[i][11]==terms[j][0]){
        int terms_m = stoi(terms[j].substr(2,terms[j].size()+1));
                m+=terms_m;
                d-=1;
                y+=m/12;
                m=m%12;
            
        }
        }
        int privacy_num = (y-2000)*12*28+(m-1)*28+(d-1);
        if(today_num>privacy_num){
            answer.push_back(i+1);
        }
    }
    return answer;
}