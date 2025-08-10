#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    int arr[n];
    fill_n(arr, n, 1);
    for(int i=0; i<lost.size(); i++){
        arr[lost[i]-1]--;
    }
      for(int i=0; i<reserve.size(); i++){
        arr[reserve[i]-1]++;
    }
    
    for(int i=0; i<n; i++){
        if(arr[i]==1 ||arr[i]==2){
            continue;
        }
        else if(arr[i]==0){
            if(i!=0 && i!=n-1)
            {
                if(arr[i-1]==2){
                    arr[i]++;
                    arr[i-1]--;
                }
                else if (arr[i+1]==2){
                    arr[i]++;
                    arr[i+1]--;
                }
                else{
                    continue;
                }
            }
            else if (i==0){
                if(arr[i+1]==2){
                    arr[i]++;
                    arr[i+1]--;
                }
                else{
                    continue;
                }
            }
            else if (i==n-1){
                if(arr[i-1]==2){
                    arr[i]++;
                    arr[i-1]--;
                }
                else{
                    continue;
                }
            }
        }
    }

    for(int i=0; i<n; i++){
        if(arr[i]>0){answer++;}
        else{continue;}
    }
    
    return answer;
}