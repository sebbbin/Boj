#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> nums)
{
    int answer = 1;
    int num =nums.size()/2;
    sort(nums.begin(), nums.end());
    int i=0;
    while(num-1){
         if(i==nums.size()-1){
                break;
        }
        if(nums[i]!=nums[i+1]){
            answer+=1;
            num--;
        }
        i++;
    }
    
    return answer;
}