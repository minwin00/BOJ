#include <iostream>
using namespace std;

int main(void){
	int a, b;
	int n;
	int k;
	int r;
	cin >> a >> b >> n;
	for (int i=0; i<n; i++){
		cin >> k;
		r=0;
		if (k>1000){
			r+=1000*a + (k-1000)*b;
		}
		else r+=k*a;
		cout << k << " " << r << "\n";
	}
	return 0;
}