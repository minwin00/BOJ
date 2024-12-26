#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	cin >> n;
	for (int i=1; i<=n; i++){
		cin >> a >> b;
		a=0;
		for (int j=1; j<=b; j++){
			a+=j;
		}
		cout << i << " " << a+b << "\n";
	}
	return 0;
}