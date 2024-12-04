#include <iostream>
using namespace std;

int main(void){
	int n;
	int a[6];
	int r;
	cin >> n;
	for (int i=0; i<n; i++){
		for (int i=0; i<6; i++){
			cin >> a[i];
		}
		r=a[2] + a[5];
		if (a[0] - a[3] >0) r+=a[0] -a[3];
		else r += a[3] - a[0];
		if (a[1] - a[4] >0) r+=a[1] -a[4];
		else r += a[4] - a[1];
		cout << r << "\n";
	}
	return 0;
}