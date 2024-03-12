#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr);
    
   vector<int> v;
   int n=0; 
   int num=0;
   cin >> n;
  for(int i=0; i<n; i++){
      cin >> num;
      v.push_back(num);
  }
   
    sort(v.begin(), v.end()); 
     //산술평균 구하기
   
   double sum=0;
   for(int i=0; i<v.size(); i++){
       sum+=v[i];
   }
  
   double N = round(sum/v.size());
   if(N==-0){
       cout << 0<<"\n";
   }
   else{
       cout << N<<"\n";
   }
   
      //중앙값
      int vsize = v.size(); 
      cout << v[vsize/2]<<"\n";
   
      //최빈값
      int arr[8001] ={0, };
      for(int i=0; i<vsize; i++){
          arr[v[i]+4000]++;
      }
   
        vector<int> maxidx;
        int count =0; //최빈값의 수
      for(int i=0; i<=8000; i++){
            if(arr[i]>=count){
                if(arr[i]==count){
                    maxidx.push_back(i);
                }
                else{
                maxidx.clear();
                maxidx.push_back(i);
                count = arr[i];
                }
          }
      }
      
    if(maxidx.size()>1){
    cout << maxidx[1]-4000 <<"\n"; //어차피 오름차순으로 들어감
    }
    else{
         cout << maxidx[0]-4000 <<"\n";
    }
    
   //범위
  cout << v[vsize-1]- v[0];
   
    
   return 0;
}
