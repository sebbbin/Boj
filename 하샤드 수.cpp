#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    string s = " ";
    int sumx=0;
    s= to_string(x); 
    for(int i=0; i<s.length(); i++){
        sumx+= int(s[i] - '0'); 
    }
    return (x%sumx==0);
}