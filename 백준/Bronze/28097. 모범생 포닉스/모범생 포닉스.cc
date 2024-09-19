#include <iostream>
using namespace std;

int main(void){
	int n;
	int a;
	int sum =0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		sum += a;
	}
	sum += 8*(n-1);
	cout << sum /24 << " " << sum % 24;
	return 0;
}