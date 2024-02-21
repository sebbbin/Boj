#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    string temp = "";
    for(int i=0; i<=(t.size()- p.size()); i++){
        int k=i;
        for(int j=0; j<p.size(); j++){
            temp +=t[k];
            k++;
        }
        cout << temp<<" "; 
        if(temp<=p){
            answer++;
        }
        temp ="";
    }
    return answer;
}