#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		cout << a << " " << b << "\n";
		cout << a*b - 2*(a-1) << "\n";
	}
	return 0;
}