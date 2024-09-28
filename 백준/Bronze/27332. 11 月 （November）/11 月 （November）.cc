#include <iostream>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	a += b*7;
	if (a <=30) cout << 1;
	else cout << 0;
	return 0;
}