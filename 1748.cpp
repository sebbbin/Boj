#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);


int n, result=0;
cin >> n;

for (int i = 1; i <= n; i *= 10) {
		result += n - i + 1;
		
}


cout << result;
return 0;
}