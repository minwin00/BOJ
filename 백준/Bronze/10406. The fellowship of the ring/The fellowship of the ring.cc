#include <iostream>
using namespace std;

int main(void){
	int a, b, n;
	int t;
	int cnt = 0;
	cin >> a >>b >> n;
	for (int i=0; i<n; i++){
		cin >> t;
		if (t>=a&&t<=b) cnt++;
	}
	cout << cnt;
	return 0;
}