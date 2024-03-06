#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    int cnt=0;
    int arr[100] ={ 0,};
    int result =1000; 
    int count =0; 
    for(int j=0;j<targets.size(); j++){
        for(int i=0;i<targets[j].size(); i++){
                for(int k=0; k<keymap.size(); k++){
                    for(int z=0; z<keymap[k].size(); z++){
                      cnt++;
                    if(targets[j][i] == keymap[k][z]){
                        arr[k]=cnt;
                        break;
                }    
            }
                     cnt=0;
        }
            for(int k=0; k<keymap.size(); k++){
                if(arr[k]>0){
                    if(result>arr[k]){
                        result= arr[k];
                    }
                }
            }
            
            count +=result;
            result =1000;
            for (int i = 0; i < 100; i++) {
            arr[i] = 0;
            }
    }
        if(count >=1000){
            answer.push_back(-1);
        }
        else {
            answer.push_back(count);
        }
        count =0;
        
}
    
    return answer;
}