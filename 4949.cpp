//균형잡힌 세상 실버4
//안좋은 코드
#include <iostream>
#include <string>

using namespace std;

int main (){
    string str;
    cin >> str;
    int a,b=0;
    for (int i=0; i<str.size(); i++){
        if(a==0||b==0){
            if(str[i]==']'||str[i]== ')'){
            cout <<"no";
            break;
            }
        }
        if(str[i]== '[')
        {
            a=1;
        }
        if(str[i]== ']')
        {
            a=0;
        }
        if(str[i]== '(')
        {
            b=1;
        }
        if(str[i]== ')')
        {
            b=0;
        }
        if(str.back()=='.'){//str의 마지막이 .인지 보기 위해서는 end가 아니라 back을 써야함
            if(a==0&&b==0){
                cout <<"yes";
                break;
            }
            else{
                cout <<"no";
                break;
            }
        }

    }
    return 0;
}