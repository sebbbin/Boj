#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num = 0;

bool compare(vector<int>& a, vector<int>& b) {
    return a[num] < b[num];
}

vector<vector<int>> solution(vector<vector<int>> data, string ext, int val_ext, string sort_by) {
    vector<vector<int>> answer;
    
    // 조건에 맞는 데이터만 answer에 추가
    for (int i = 0; i < data.size(); i++) {
        if (ext == "code" && data[i][0] < val_ext) {
            answer.push_back(data[i]);
        }
        else if (ext == "date" && data[i][1] < val_ext) {
            answer.push_back(data[i]);
        }
        else if (ext == "maximum" && data[i][2] < val_ext) {
            answer.push_back(data[i]);
        }
        else if (ext == "remain" && data[i][3] < val_ext) {
            answer.push_back(data[i]);
        }
    }

    // 정렬 기준에 따라 num 설정
    if (sort_by == "code") {
        num = 0;
    }
    else if (sort_by == "date") {
        num = 1;
    }
    else if (sort_by == "maximum") {
        num = 2;
    }
    else if (sort_by == "remain") {
        num = 3;
    }

    // 정렬
    sort(answer.begin(), answer.end(), compare);

    return answer;
}
