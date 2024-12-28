#include <iostream>
using namespace std;

int main(void){
	int a, b, n;
	int t;
	cin >> n >> a>> b;
	for (int i=0; i<n; i++){
		cin >> t;
		if (t*t <= a*a + b*b) cout << "YES\n";
		else cout << "NO\n";
	}
	return 0;
}