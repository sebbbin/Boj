#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
    int n = 0, num;
    int maxVal = 0;
    deque<int> d;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> num;
        if (d.empty() || d.back() < num) { //d.back() 사용 전 덱 비어있는지 확인: d.back()을 호출하기 전에 d가 비어 있는지 반드시 확인해야 함.
            d.push_back(num);
        } else {
            if (d.size() > 1) {
                int currentDiff = d.back() - d.front();
                if (maxVal < currentDiff) {
                    maxVal = currentDiff;
                }
                d.clear();
            } else {
                d.clear();
            }
            d.push_back(num);  // 새로운 값으로 시작
        }
    }

    // 반복이 끝난 후 남아 있는 덱의 값을 검토
    if (d.size() > 1) {
        int currentDiff = d.back() - d.front();
        if (maxVal < currentDiff) {
            maxVal = currentDiff;
        }
    }

    cout << maxVal;
    
    return 0;
}
