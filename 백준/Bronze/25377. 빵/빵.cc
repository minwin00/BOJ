#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	int min = 99999;
	cin >> n;
	for (int i =0; i<n; i++){
		cin >> a >> b;
		if (a <= b && min > b) min = b;
	}
	
	if (min == 99999) cout << -1;
	else cout << min;
	return 0;
}