#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, sum = 0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		sum += a;
	}
	cout << sum;
	return 0;
}