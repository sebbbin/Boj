#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    vector<int> temp;
    for(int i=0; i<numbers.size()-1;i++){
        for(int k=i+1; k< numbers.size(); k++){
             temp.push_back(numbers[i]+numbers[k]);
        }
    }
    
    sort(temp.begin(), temp.end());
    answer.push_back(temp[0]);
    for(int i=1; i<temp.size(); i++){
        if(temp[i-1]==temp[i]){
            continue;
        }
        else{
        answer.push_back(temp[i]);
        }
    }
           
    return answer;
}