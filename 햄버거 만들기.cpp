#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    int i=0;
    int k=0;
   
while(1){
    if(i>ingredient.size()-3){
        i=0;
    }
    if(ingredient.size()<4){
        break;
    }
    if(k >ingredient.size())
    {
        break;
    }

   if (ingredient[i] == 1 && ingredient[i + 1] == 2 && ingredient[i + 2] == 3 && ingredient[i + 3] == 1) {
                ingredient.erase(ingredient.begin()+i, ingredient.begin()+i+4);
                answer++;
                k=0;
                i -= 3;
   }
    else{
        i++;
        k++;
    }
    
}
    return answer;
}