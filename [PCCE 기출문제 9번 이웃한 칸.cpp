#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<string>> board, int h, int w) {
    int answer = 0;
    int num = board.size();

        if(h>0)
        {
            if(board[h][w]==board[h-1][w]){
            answer+=1;
            }
        }
        if(w>0)
        {
            if(board[h][w]==board[h][w-1])
            {
            answer+=1;
            }
        }
        if(w<num-1){
            if(board[h][w]==board[h][w+1])
            {
            answer+=1;
            }
        }
        if(h<num-1){
            if(board[h][w]==board[h+1][w])
            {
            answer+=1;
            }
        }
    
    return answer;
}