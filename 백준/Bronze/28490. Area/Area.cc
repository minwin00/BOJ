#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	int mx=0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		if (mx  < a*b) mx = a*b;
	}
	cout << mx;
	return 0;
}