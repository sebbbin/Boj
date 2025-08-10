#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    for(int i = 0; i < arr1.size(); ++i) { //arr1.size() 행의 개수
        vector<int> row; // 새로운 행 벡터를 생성하여 answer에 추가
        for(int j = 0; j < arr1[0].size(); ++j) { //arr[0].size() 열의 개수
            row.push_back(arr1[i][j] + arr2[i][j]);
        }
         answer.push_back(row); // 완성된 행 벡터를 answer에 추가
    }
    return answer;
}