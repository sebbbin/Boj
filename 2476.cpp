#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int N;
    cin >> N;

    int a, b, c, temp = 0;
    for (int i = 0; i < N; i++) {
        cin >> a >> b >> c;

        int result;
        if (a == b && b == c) {
            result = 10000 + (a * 1000);
        } else if (a == b || a == c) {
            result = 1000 + (a * 100);
        } else if (b == c) {
            result = 1000 + (b * 100);
        } else {
            if(a>b&&a>c)
            result = a*100;
            else if(b>a&&b>c)
            result = b*100;
            else
            result = c*100;
        }

        if (temp < result) {
            temp = result; 
        }
    }

    cout << temp << "\n";
    return 0;
}
