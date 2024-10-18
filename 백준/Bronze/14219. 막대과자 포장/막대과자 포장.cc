#include <iostream>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	if (a*b%3==0) cout << "YES";
	else cout << "NO";
	return 0;
}