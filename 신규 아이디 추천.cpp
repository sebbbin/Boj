#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";
    string temp="";
    
    //1단계
    for(int i=0; i<new_id.size(); i++){

        if((int)new_id[i]<=90&&(int)new_id[i]>=65){
           temp+=(char)((int)new_id[i]+32);
        }
        else{
            temp+=new_id[i];
        }
    }

    
    //2단계
    for(int i=0; i<temp.size(); i++){
        if(temp[i]<='9'&&temp[i]>='0'||temp[i]<=90&&temp[i]>=65||temp[i]<=122&&temp[i]>=97||temp[i]=='-'||temp[i]=='_'||temp[i]=='.'){
           answer+=temp[i];
        }
    }
    
    
    temp="";
    //3단계
    for(int i=0; i<answer.size(); i++){
        if(answer[i]=='.'){
            if(i!=0&&answer[i-1]=='.'){
                continue;
            }
            temp+=answer[i];
        }
        else{
            temp+=answer[i];
        }
    }
    answer="";

    //4단계
    for(int i=0; i<temp.size(); i++){
        if (i == 0 && temp[i] == '.') {
        continue; // 첫 번째 문자가 마침표인 경우
         }
         if (i == temp.size() - 1 && temp[i] == '.') {
        continue; // 마지막 문자가 마침표인 경우
          }
        else{
        answer+=temp[i];
        }
    }
    
    temp="";
    
    //5단계
    if(answer.empty()){
        answer+='a';
    }
    
    
    //6단계
    if(answer.size()>=16){
        temp = answer.substr(0,15);
        if(temp[temp.size()-1]=='.'){
            temp.pop_back();
    }
    }
    else {
        temp = answer;
    }
     
    
    //7단계
    while(temp.size()<3){
        temp+=temp[temp.size()-1];
    }
    
     return temp;

}