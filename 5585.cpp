#include <iostream>

using namespace std;

int main (){
    int money;
    cin >> money;
    int count = 0;
   
    money = 1000-money;

    count += money/500;

    money = money%500;

    count += money/100;

    money = money%100;

    count += money/50;

    money = money%50;  

    count += money/10;

    money = money%10;

    count += money/5;

    money = money%5;

    count += money;

    cout << count;

    return 0; 
}