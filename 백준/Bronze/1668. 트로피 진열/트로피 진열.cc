#include <iostream>
using namespace std;

int main(void){
	int rt=0, lt=0;
	int a[51];
	int lcnt = 0, rcnt = 0;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++){
		cin >> a[i];
	}
	for (int i = 0; i<n; i++){
		if (lt < a[i]) {
			lcnt++;
			lt = a[i];
		}
		if (rt <a[n-i-1]){
			rcnt++;
			rt = a[n-i-1];
		}
	}
	cout << lcnt << "\n" << rcnt;
}