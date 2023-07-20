//10799 쇠막대기 실버 2

#include <iostream>
#include <stack>

using namespace std;
int sum=0;

int main (){
ios_base::sync_with_stdio(false); 
cin.tie(nullptr); 
cout.tie(nullptr);
    string str; 
    stack<int> s; 
    cin >>str;
    for (int i=0; i<str.size(); i++){
        if (str[i] == '(') 
        s.push(str[i]);
        else{ //)이면 
            if (str[i-1]=='(') //레이저 () ( 
            {
                s.pop();
                sum+=s.size(); //이만큼더해주기
            }
            else{ //막대의 끝 ()) -> 앞에 무언가의 (랑 만남
            s.pop();
            sum++; //1더해줌
            }
        }   
    }
    cout <<sum;
    return 0;
}