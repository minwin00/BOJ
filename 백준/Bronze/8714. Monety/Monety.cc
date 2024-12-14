#include <iostream>
using namespace std;

int main(void){
	int n;
	int t;
	int f1=0, f2=0;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> t;
		if(t==1) f1++;
		if (t==0) f2++;
	}
	if(f1<f2) cout << f1;
	else cout << f2;
	return 0;
}