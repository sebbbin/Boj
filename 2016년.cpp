#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int arr[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int count =0;
    for(int i=0; i<a-1; i++){
        count += arr[i];
    }
    count +=b;
    count %= 7;
    switch (count)
    {case 1 : 
            answer = "FRI";
            break;
     case 2 : 
            answer = "SAT";
            break;
     case 3 : 
            answer = "SUN";
            break;
     case 4 : 
            answer = "MON";
            break;
     case 5 : 
            answer = "TUE";
            break;
      case 6 : 
            answer = "WED";
            break;
      case 0 : 
            answer = "THU";
            break;
     
    }
    return answer;
}