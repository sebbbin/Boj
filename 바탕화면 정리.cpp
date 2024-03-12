#include <string>
#include <vector>
#include <iostream>

using namespace std;
//min,max 이용 시 더 간결한 코드 answer[0] = min(answer[0],i);
vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int lastline_x=0;
    int lastline_y=0;
    int start_x=1000;
    int start_y=1000;
    for(int y=0; y<wallpaper.size(); y++){
        for(int x=0; x<wallpaper[y].size(); x++){
              if(wallpaper[y][x]=='#'){
                if(y<start_y){
                    start_y=y;
                }
                if(start_x>x){
                    start_x=x;

                }
                if(x>lastline_x){
                    lastline_x=x;
                }
                if(y>lastline_y){
                    lastline_y=y;
                }
              }
        }
    }
    answer.push_back(start_y);
    answer.push_back(start_x);
    answer.push_back(lastline_y+1);
    answer.push_back(lastline_x+1);
    
    return answer;
}