#include<iostream>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if (a > b) a= b;
	cout << a*100/2;
	return 0;
}