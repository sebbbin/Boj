#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    int a =0;
    int b =0;
    int c =0;
    for(int i=0; i<answers.size(); i++){
        if(i%5==0){
            if(answers[i]%5==1){
                a++;
            }
            else{
                continue;
            }
        }
        else if(i%5==1){
            if(answers[i]%5==2){
                a++;
            }
            else{
                continue;
            }
            
        }
         else if(i%5==2){
            if(answers[i]%5==3){
                a++;
            }
             else{
                continue;
            }
            
        }
         else if(i%5==3){
            if(answers[i]%5==4){
                a++;
            }
             else{
                continue;
            }
            
        }
         else if(i%5==4){
            if(answers[i]%5==0){
                a++;
            }
             else{
                continue;
            } 
        }
    }
    
    for(int i=0; i<answers.size(); i++){
        if(i%2==0){
            if(answers[i]==2){
                b++;
            }
            else{
                continue;
            }
        }
        else if(i%8==1){
            if(answers[i]==1){
                b++;
            }
            else{
                continue;
            }
        }
        else if(i%8==3){
            if(answers[i]==3){
                b++;
            }
            else{
                continue;
            }
            
        }
         else if(i%8==5){
            if(answers[i]==4){
                b++;
            }
             else{
                continue;
            }
            
        }
         else if(i%8==7){
            if(answers[i]==5){
                b++;
            }
             else{
                continue;
            }
            
        }
    }
    for(int i=0; i<answers.size(); i++){
        if(i%10==0 || i%10 ==1){
            if(answers[i]==3){
                c++;
            }
            else{
                continue;
            }
        }
        else if(i%10==2 || i%10 ==3){
            if(answers[i]==1){
                c++;
            }
            else{
                continue;
            }
            
        }
         else if(i%10==4 || i%10 ==5){
            if(answers[i]==2){
                c++;
            }
             else{
                continue;
            }
            
        }
         else if(i%10==6 || i%10 ==7){
            if(answers[i]==4){
                c++;
            }
             else{
                continue;
            }
            
        }
         else if(i%10==8 || i%10 ==9){
            if(answers[i]==5){
                c++;
            }
             else{
                continue;
            } 
        }
    }

    if(a>=b && a>=c){
        if(a==b &&a==c){
            return {1,2,3};
        }
        else if(a==b && a>c){
            return {1,2};
        }
        else if(a==c && a>b){
            return {1,3};
        }
        else{
            return {1};
        }
    }
    else if(b>a && b>=c){
        if(b>a && b==c){
            return {2,3};
        }
        else{
            return {2};
        }
    }
    else{
        return {3};
    }
}