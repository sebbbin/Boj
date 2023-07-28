#include <iostream>
using namespace std;

int main()
{
	int a, b;

	cin >> a >> b;
	cout << a * (b % 10) << '\n';    //3
	cout << a*((b / 10)%10) << '\n';  //4
	cout << a * (b / 100) << '\n';   //5
	cout << a * b << '\n';            //6

	return 0;
}