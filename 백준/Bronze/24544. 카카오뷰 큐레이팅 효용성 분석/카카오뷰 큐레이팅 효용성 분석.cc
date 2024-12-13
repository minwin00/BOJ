#include <iostream>
using namespace std;

int main(void){
	int n;
	int a[1001];
	int t;
	int r=0, total = 0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
		total += a[i];
	}
	for (int i=0; i<n; i++){
		cin >> t;
		if (t==0) r += a[i];
	}
	cout << total << "\n" << r;
	return 0;
}