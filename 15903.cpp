#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	priority_queue<long long, vector<long long>, greater<long long>> pq;
	
    long long n,m, num, tmp=0;
    cin >> n>>m;
	
	for(long long i=0; i<n; i++){
	    cin >> num;
	    pq.push(num);
	}
    while(m--){
        tmp=0;
        tmp += pq.top();
        pq.pop();
        tmp+= pq.top();
        pq.pop();
        pq.push(tmp);
        pq.push(tmp);
    }
	long long result =0;
	
	while(!pq.empty()){
	    result+= pq.top();
	    pq.pop();
	}
	
	cout << result;
	
	return 0;
}