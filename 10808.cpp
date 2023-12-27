#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main () {

ios_base::sync_with_stdio(false); 
cin.tie(nullptr); cout.tie(nullptr);

string s;
cin >>s;

int arr[26] = {0,};
for (int i=0; i<s.length(); i++){

arr[s[i]-'a']+=1;
}
for (int i = 0; i < 26; i++)
{
	cout << arr[i] << ' ';
}

return 0;
}