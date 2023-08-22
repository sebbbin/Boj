#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    char arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> arr[i][j];
        }
    }

    int minCnt = 64; // 최대 가능한 칠해야 하는 칸의 개수는 64개

    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int cnt1 = 0, cnt2 = 0; // 첫 번째 칸을 'W'로 시작하는 경우와 'B'로 시작하는 경우의 칠해야 하는 칸 개수

            for (int x = i; x < i + 8; x++) {
                for (int y = j; y < j + 8; y++) {
                    if ((x + y) % 2 == 0) { // (x, y)가 홀수 합인 경우
                        if (arr[x][y] != 'W') cnt1++;
                        if (arr[x][y] != 'B') cnt2++;
                    } else { // (x, y)가 짝수 합인 경우
                        if (arr[x][y] != 'B') cnt1++;
                        if (arr[x][y] != 'W') cnt2++;
                    }
                }
            }

            minCnt = min(minCnt, min(cnt1, cnt2));
        }
    }

    cout << minCnt << endl;

    return 0;
}
