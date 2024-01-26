#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int N, M, K;    
    cin >> N >> M >> K;
    
    int num = min(M, N / 2);
    num = min(num, (N + M - K) / 3);
    cout << num;
}