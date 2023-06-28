//아 ㅋㅋ 출력초과네
//괄호 실버 4

#include <iostream>
#include <string>

using namespace std;

int main () {
string str;
int a;
int in = 0;
cin >> a;
for (int i=0; i<a; i++){
    cin >>str;
    for(int j=0; j<str.size(); j++){
        if(str[0]==')')
        {
            in --;
            break;
        }
    if (str[j]=='(')
    {
     in++;
    }
    if(str[j+1]==')')
    {
        in --;
    }
    if(in<0)
    {
        break;
    }
    }
    if(in==0){
        cout <<"YES"<<endl;
    }
    else {
        cout <<"NO"<<endl;
    }
    in =0;
    str.clear();
}
return 0;
}