#include <iostream>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	b -=a;
	if (b <= 0) cout << "Congratulations, you are within the speed limit!";
	else if (b<=20) cout << "You are speeding and your fine is $100.";
	else if (b<=30) cout << "You are speeding and your fine is $270.";
	else cout << "You are speeding and your fine is $500.";
	return 0;
}