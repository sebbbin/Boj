//균형잡힌 세상 실버 4
//stack 이용함
#include <iostream>
#include <stack>

using namespace std;

bool isBalanced(const string& str) {
    stack<char> s;

    for (auto c : str) {
        if (c == '(' || c == '[') {
            s.push(c);
        } else if (c == ')') {
            if (s.empty() || s.top() != '(') {
                return false;
            }
            s.pop();
        } else if (c == ']') {
            if (s.empty() || s.top() != '[') {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    while (getline(cin, str)) {
        if (str == ".") {
            break;
        }

        if (isBalanced(str)) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;
}
