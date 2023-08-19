//단어 정렬 실버 5
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n;
    cin >>n;
    string s;
    vector <pair<int, string>>v(n);

	for (int i = 0; i < n; i++){
		cin >> v[i].second;
		v[i].first = v[i].second.length();
	}

    sort(v.begin(), v.end()); //문자열의 길이에 따라 오름차순
    
    cout << v[0].second << "\n";

	for (int i = 1; i < n; i++){
		if(v[i].second!=v[i-1].second)
			{
                cout << v[i].second <<"\n";
            }
    }

    return 0;
}