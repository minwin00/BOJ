#include <iostream>
using namespace std;

int main(void){
	int a, b, c;
	cin >> a >> b >> c;
	if(a+c*b >a*b) cout << 1;
	else if (a+c*b<a*b) cout << 2;
	else cout << 0;
	return 0;
}