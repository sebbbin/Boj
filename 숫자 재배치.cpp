#include <bits/stdc++.h>
using namespace std;

string a, b;
bool used[10] = {0};
char arr[11];
int c = -1;
string current="";

void dfs(int idx) {
    if (idx == a.size()) {
        if (!current.empty()&&current[0] != '0') { // 숫자가 0으로 시작하지 않도록 함
            long long num = stoll(current);
            if (num < stoll(b)) {
                c = max(c, (int)num);
            }
        }
        return;
    }

    for (int i = 0; i < a.size(); i++) {
        if (!used[i]) {
            used[i] = 1;
            current += a[i];
            dfs(idx + 1);
            current.pop_back();
            used[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> a >> b;
    sort(a.begin(), a.end(), greater<char>());

    dfs(0);

    cout << c << "\n";

    return 0;
}
