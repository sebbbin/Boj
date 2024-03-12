#include <string>
#include <vector>


using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    int m[91]={0,};
    for(int i=0; i<survey.size(); i++){
        if(choices[i]==1){
            m[(int)survey[i][0]] += 3;
        }
        else if(choices[i]==2){
            m[(int)survey[i][0]]+= 2;
        }
        else if(choices[i]==3){
            m[(int)survey[i][0]]+= 1;
        }
        else if(choices[i]==4){
            continue;
        }
        else if(choices[i]==5){
            m[(int)survey[i][1]]+= 1;
        }
        else if(choices[i]==6){
            m[(int)survey[i][1]]+= 2;
        }
        else if(choices[i]==7){
            m[(int)survey[i][1]]+= 3;
        }
    }
    
    if(m[82]>=m[84]){
        answer+='R';
    }
    else if(m[82]<m[84]){
        answer+='T';
    }
    if(m[67]>=m[70]){
        answer+='C';
    }
    else if(m[67]<m[70]){
        answer+='F';
    }
    if(m[74]>=m[77]){
        answer+='J';
    }
    else if(m[74]<m[77]){
        answer+='M';
    }
    if(m[65]>=m[78]){
        answer+='A';
    }
    else if(m[65]<m[78]){
        answer+='N';
    }
    
    
    
    return answer;
}