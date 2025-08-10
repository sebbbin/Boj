#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare (char a, char b){
    return a>b; //내림차순
}

string solution(string X, string Y) {
    string answer = "";
    long long x[10] = {0, };
    long long y[10] = {0, };
    long long result[10]={0, };
    for(int i=0; i<X.length(); i++){
        x[X[i] - '0']++;
    }
     for(int k=0; k< Y.length(); k++){
        y[Y[k] - '0']++;
    }
 
    for( int i=0; i<10; i++){
        if(x[i]>y[i] || x[i] == y[i]){
            result[i] = y[i];
        }
        else {
            result[i] = x[i];
        }
    }
   
    for(int i=0; i<10; i++){
        for(int k=0; k<result[i]; k++){
         answer.push_back(i + '0');
        }
    }
    
    if(answer.empty()){
        return "-1";
    }
    
    else{
         sort(answer.begin(), answer.end(), compare);
        
         if(answer[0]=='0'){
             return "0";
         }
        
         else
          return answer;
    }
}