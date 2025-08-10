#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "";
    for(int i=1; i<food.size(); i++){
        for(int k=0; k<food[i]/2; k++)
        {answer.push_back('0' + i);}
    }
    answer.append("0");
    for(int i=food.size()-1; i>0; i--){
        for(int k=0; k<food[i]/2; k++)
        {answer.push_back('0' + i);}
    }
        
    return answer;
}