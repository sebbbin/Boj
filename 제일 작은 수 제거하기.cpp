#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if(arr.size()==1){
        answer.push_back(-1);
        return answer;
    }
    else
    {
       int min_index =  min_element(arr.begin(), arr.end()) - arr.begin();
        arr.erase(arr.begin()+min_index);
        for(int i=0; i<arr.size(); i++){
            answer.push_back(arr[i]);
        }
    return answer;
    }
}