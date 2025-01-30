#include <iostream>
using namespace std;

int main(void){
	int n, m;
	int mx=0;
	int a[1001] = {0,};
	int b[1001] = {0,};
	cin >> n >> m;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	for (int j=0; j<m; j++){
		cin >> b[j];
		b[j] = b[j] -a[j];
		if (b[j] > mx) mx = b[j];
	}
	cout << mx;
	return 0;
}