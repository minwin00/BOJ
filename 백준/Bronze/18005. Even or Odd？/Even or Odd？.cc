#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	if (n%2) cout << 0;
	else {
		n/=2;
		if (n%2) cout << 1;
		else cout << 2;
	}
	return 0;
}