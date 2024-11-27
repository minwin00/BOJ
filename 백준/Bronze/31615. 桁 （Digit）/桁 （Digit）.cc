#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int cnt = 0;
	cin >> a >> b;
	a+=b;
	while (a){
		a/=10;
		cnt++;
	}
	cout << cnt;
	return 0;
}