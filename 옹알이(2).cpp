#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i=0; i< babbling.size(); i++){
        int flag=0; 
        int count=0; 
        for(int j=0; j< babbling[i].size(); j++){
            if(babbling[i].substr(j,3)=="aya"&&flag!=1){
                flag=1; 
                count++;
                j+=2;
            }
            else if(babbling[i].substr(j,3)=="woo"&&flag!=2){
                flag=2; 
                count++;
                j+=2;
            }
            else if(babbling[i].substr(j,2)=="ye"&&flag!=3){
                flag=3; 
                count++;
                j+=1;
            }
            else if(babbling[i].substr(j,2)=="ma"&&flag!=4){
                flag=4; 
                count++;
                j+=1;
            }
            else{
                count =0;
                break;
            }
        }
        if(count>0){
            answer++;
        }
    }
    return answer;
}