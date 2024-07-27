#include <iostream>
using namespace std;

int main(void){
	int a, b, c;
	int temp = 0;
	cin >> a >> b >> c;
	temp = a*24*60+b*60+c;
	temp -= 11*24*60+11*60+11;
	if (temp <0) cout << -1;
	else cout << temp;
	return 0;
}