#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    int arr [150]={0, };
    int k=0;
    sort(skip.begin(), skip.end());
    for(int i= 97; i<=122; i++){
        if((int)skip[k]==i){
            arr[i]=0;
            k++;
        }
        else {
            arr[i]=1;
            continue;
        }
    }
    vector<char> vec;
    for(int i= 97; i<=122; i++){
        if(arr[i]==1){
        // 정수값을 char로 캐스팅하여 벡터에 추가
        char charValue = static_cast<char>(i);
           vec.push_back(charValue);
        }
        else {
            continue;
        }
    }
   
        
    for(int j=0; j<s.size(); j++){
    for(int i=0; i<vec.size(); i++){
        int z=i+index;
        if(z>=vec.size())
           {  z %= vec.size();}
       if(s[j]==vec[i]){
           answer+=vec[z];}
       else{
         continue;
     }
    }
}
    
    return answer;
}
