#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
     string result = ""; 
     string binary_arr1 = "";
     string binary_arr2 = "";
    for(int i=0; i<n; i++){
        result = ""; 
        binary_arr1 = "";
        binary_arr2 = "";
        while (arr1[i] != 0)
         {
        binary_arr1 += to_string(arr1[i] % 2);
        arr1[i] /= 2;
         }
         while (binary_arr1.size()<n){
             binary_arr1+='0';
        }
    
        reverse(binary_arr1.begin(), binary_arr1.end());
        
        while (arr2[i] != 0)
         {
        binary_arr2 += to_string(arr2[i] % 2);
        arr2[i] /= 2;
         }
        while (binary_arr2.size()<n){
             binary_arr2+='0';
        }
        reverse(binary_arr2.begin(), binary_arr2.end());
      
        for(int j=0; j<n;j++){
            if(binary_arr1[j]=='1'||binary_arr2[j]=='1'){
                result+='#';
            }
            else{
                result +=' ';
            }
        }
        answer.push_back(result);
    }
    
    return answer;
}