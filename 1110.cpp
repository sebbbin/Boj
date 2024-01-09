#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);

    int N;
    cin >> N;
    int first = N;
    int num = 0, result = 0;

    while(1){
        int digit1 = N / 10;
        int digit2 = N % 10;

        int sum = digit1 + digit2;

        result = digit2 * 10 + sum % 10;
        N = result;
        num++;
        if(first == result){
             cout <<num;
             return 0;
        }
    }

}
