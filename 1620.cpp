//나는야 포켓몬마스터 이다솜 실버 4
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    vector<string> v(N);
    map<string, int> Index;

    for (int i = 0; i < N; i++) {
        cin >> v[i];
        Index[v[i]] = i + 1;//포켓몬에 따른인덱스넣기
    }

    for (int i = 0; i < M; i++) {
        string question;
        cin >> question;

        if (isdigit(question[0])) { //맨첫글자가 정수냐?
            int index = stoi(question);
            cout << v[index - 1] << "\n";
        } else {
            cout << Index[question] << "\n";
        }
    }

    return 0;
}
