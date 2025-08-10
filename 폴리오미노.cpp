#include <iostream>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    string str="";
    cin >> str;
    string result = "";
    int num=0;
    
    for(int i=0; i<str.size(); i++){
        if(str[i]=='.'){
            if(num%2==0){
                for(int j=0; j<num/4; j++){
                result+="AAAA";
                }
                if(num%4==2){
                    result +="BB";
                }
                result+='.';
            }
            else{
                cout<<-1;
                return 0;
            }
            num=0;
        }
        else{
        num++;   
        }
    }
    
    if(num !=0){
        if(num%2==0){
                for(int j=0; j<num/4; j++){
                result+="AAAA";
                }
                if(num%4==2){
                    result +="BB";
                }
            }
            else{
                cout<<-1;
                return 0;
            }
    }
    cout << result;
    
    return 0;
}
