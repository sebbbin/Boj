#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx =0;
    for(int i=0; i<s.size(); i++){
        if(s[i]==' '){
            answer.push_back(' ');
            idx =0;
            continue;
        }
        if(idx%2==0){
            if(s[i] >= 'a' && s[i] <= 'z')
            { answer.push_back(s[i]- 'a' + 'A');}
        else
        {answer.push_back(s[i]);
        }
        }
        else{
           if(s[i] >= 'A' && s[i] <= 'Z')
            { answer.push_back(s[i]- 'A' + 'a');}
        else
        {answer.push_back(s[i]);
        }
        }
         idx++;
    }
    return answer;
}