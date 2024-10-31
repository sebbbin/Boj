#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
    long long n;
    cin >> n;
    vector<long long> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    
    long long left = 0; //앞에서부터
    long long right = n-1; //맨 뒤에서부터
    
    int sum = abs(v[left]+v[right]);
    
    long long a = v[left];
    long long b = v[right];
    
    while(left<right){
        int tmpsum = v[left]+ v[right];
        if(abs(tmpsum)<sum){
            sum = abs(tmpsum);
            a = v[left];
            b = v[right];
        }
        
        if(tmpsum<0){
            left++;
        }
        else {
            right--;
        }
    }
	
	cout << a<<" " <<b;
	
	return 0;
}