#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

string s;
cin >> s;

vector<int> nums;

for (char c : s) { //char c : 반복되는 각 요소의 타입과 변수 이름 
        // 문자를 정수로 변환하고 벡터에 추가
        nums.push_back(c - '0');
}

int arr[10] ={0,};

for(int i=0; i<nums.size(); i++){
 if(nums[i]==9 || nums[i]==6){
 arr[6]++;
}
else {
arr[nums[i]]++;
}
}

if(arr[6]%2==0){
    arr[6] = arr[6]/2;
}
else{
    arr[6] = arr[6]/2+1;
}

sort(arr, arr+10, greater<int>());

cout <<arr[0];


}