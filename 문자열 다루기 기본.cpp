#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = true;
    for(int i=0; i<s.length(); i++){
        if(!(s[i]>='0'&&s[i]<='9')){
            cout<< false;
            return 0;
        }
        else {
            continue;
        }
    }
    
    if(s.length() == 4 || s.length()==6){
    return answer;
    }
    else{
        return false;
    }
}