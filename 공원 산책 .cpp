#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    int x=0, y=0; 
    for(int i=0; i<park.size(); i++){
        for(int j=0; j<park[i].size(); j++){
            if(park[i][j]=='S'){
                x=i;
                y=j;
            }
        }
    }
    string s="";
    int num =0;
    int temp_x =x; 
    int temp_y=y;
    for(int i=0; i<routes.size(); i++){
        s="";
        temp_x=x; 
        temp_y=y;
        for(int j=2; j<routes[i].size(); j++){
            s+=routes[i][j];
        }
        num = stoi(s);
        if(routes[i][0]=='S')
        {
            //장애물을 만나면
            for(int k=x; k<=x+num; k++){
                if(k>park[0].size()-1){
                    break;
                }
                if(park[k][y] =='X')
                {
                    x=100; //장애물을 만났다는 플래그 무조건 최대 크기보다 큼
                    break;
                }
            }
            if(x+num<park.size()){
               x+=num; //크기가 넘어가면 더하지 않음
            }
            if(x==100){ //장애물을 만나면 그냥 다시 temp의 값을 넣어줌 
                x=temp_x;
            }
        }
        else if(routes[i][0]=='N'){
            temp_x =x;
            //장애물을 만나면
            for(int k=x; k>=x-num; k--){
                if(k<0){
                    break;
                }
                if(park[k][y] =='X')
                {
                    x=-1; //장애물을 만났다는 플래그 무조건 최대 크기보다 작음
                    break;
                }
            }
            if(x-num>=0){
               x-=num; //크기가 넘어가면 빼지 않음
            }
            if(x==-1){ //장애물을 만나면 그냥 다시 temp의 값을 넣어줌 
                x=temp_x;
            }
        }
        else if(routes[i][0]=='E'){
            temp_y =y;
            //장애물을 만나면
            for(int k=y; k<=y+num; k++){
                if(k>park.size()-1){
                    break;
                }
                if(park[x][k] =='X')
                {
                    y=100; //장애물을 만났다는 플래그 무조건 최대 크기보다 큼
                    break;
                }
            }
            if(y+num<park[0].size()){
               y+=num; //크기가 넘어가면 더하지 않음
            }
            if(y==100){ //장애물을 만나면 그냥 다시 temp의 값을 넣어줌 
                y=temp_y;
            }
        }
        else if(routes[i][0]=='W'){
            temp_y =y;
            //장애물을 만나면
            for(int k=y; k>=y-num; k--){
                if(k<0){
                    break;
                }
                if(park[x][k] =='X')
                {
                    y=-1; //장애물을 만났다는 플래그 무조건 최대 크기보다 작음
                    break;
                }
            }
            if(y-num>=0){
               y-=num; //크기가 넘어가면 빼지 않음
            }
            if(y==-1){ //장애물을 만나면 그냥 다시 temp의 값을 넣어줌 
                y=temp_y;
            }
        }
    }
    
    answer.push_back(x);
    answer.push_back(y);
    
    return answer;
}