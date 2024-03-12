#include <string>
#include <iostream>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    int score[3] = {0}; // 세 번의 점수를 저장할 배열
    int idx = 0; // 현재 처리 중인 인덱스

    for (int i = 0; i < dartResult.length(); ++i) {
        if (isdigit(dartResult[i])) { // 현재 문자가 숫자인 경우
            if (dartResult[i] == '1' && dartResult[i + 1] == '0') {
                score[idx] = 10;
                i+=1; // '10'이므로 다음 문자는 건너뜀
            } else {
                score[idx] = dartResult[i] - '0'; // 해당 숫자를 저장
            }
        } else if (dartResult[i] == 'S' || dartResult[i] == 'D' || dartResult[i] == 'T') { // 현재 문자가 영역인 경우
            if (dartResult[i] == 'D') { // Double
                score[idx] = pow(score[idx], 2); // 제곱
            } else if (dartResult[i] == 'T') { // Triple
                score[idx] = pow(score[idx], 3); // 세제곱
            }
           idx+=1; // 다음 기회로 이동
        } else { // 옵션인 경우
            if (dartResult[i] == '*') { // 스타상
                score[idx - 1] *= 2; // 현재와 이전 점수를 2배
                if (idx - 2 >= 0) score[idx - 2] *= 2; // 중첩된 스타상 처리
            } else if (dartResult[i] == '#') { // 아차상
                score[idx - 1] *= -1; // 현재 점수를 마이너스
            }
        }
    }

    // 최종 점수 계산
    for (int i = 0; i < 3; ++i) {
        answer += score[i];
    }

    return answer;
}