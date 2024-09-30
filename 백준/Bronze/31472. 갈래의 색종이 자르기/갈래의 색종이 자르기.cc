#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	n*=2;
	for (int i=0; i<=n; i++){
		if (i*i == n) {
			cout << i*4;
			return 0;
		}
	}
}