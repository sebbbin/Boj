#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int N,count=0;
    cin >> N;
    for(int i = 0; i < N; i++){
    	string str;
        cin >> str;
	stack<char> stack;
        for(int j = 0; j < str.size(); j++){
        if(stack.empty()){
            stack.push(str[j]);
        }
        else{
            if (stack.top() == str[j])
            stack.pop();
            else{
                stack.push(str[j]);
            }
        }
        }
        if (stack.empty()){
            count++;
        }
    }
    cout << count;
}