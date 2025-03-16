#include <iostream>
using namespace std;

int main(void){
	int n;
	int a;
	int r;
	int mn = 2147483647;

	cin >> n;
	for (int i=0; i<n;i++){
		cin >> a;
		if (mn > a){
			mn = a;
			r = i;
		}
	}
	cout << r;
	return 0;
}