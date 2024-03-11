#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    stack<int> s;
    for(int i=0; i< moves.size(); i++){
        for(int j=0; j<board.size(); j++){
            if(board[j][moves[i]-1]!=0){
                if(!s.empty()&&s.top()==board[j][moves[i]-1]) //같은거 두개 연속으로 꺼내는지
                {
                    s.pop();
                    answer+=2;
                }
                else{
                    s.push(board[j][moves[i]-1]);
                }
                board[j][moves[i]-1] =0; //없앰
                break;
            }
        }
    }
    
    
    
    return answer;
}