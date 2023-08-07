#include <iostream>
#include <algorithm>
#include <vector>


using namespace std;

int main (){
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    int n,x,cnt=0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
	}
 	cin >> x;
    sort(v.begin(),v.end());
 	int left, right,sum;
       left = 0;
       right = n-1;
   while(1){
       if(left >= right){
           break;
       }
	sum = v[left]+v[right];
       if(sum == x){
           cnt++;
           left++;
           right--;
       }
       else if(sum < x){
           left++;
       }
       else{
           right--;
       }
   }
    cout << cnt;
    return 0;
}