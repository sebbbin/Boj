#include <iostream>

using namespace std;

int main (){
ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    int N, K;
    cin >> N >> K;
    int arr[N];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    //버블소트알고리즘을 이용해 오름차순 정렬
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

   cout << arr[K-1];

    return 0;
}