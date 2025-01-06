#include <iostream>
#include <algorithm>
using namespace std;

int main(void){
	int a[3];
	int t;
	char x[3];
	cin >> a[0] >> a[1] >> a[2];
	cin>>x[0]>>x[1]>>x[2];
	sort (a, a+3);
	for (int i=0; i<3; i++){
		if (x[i]=='A') cout << a[0]<< " ";
		if (x[i]=='B') cout << a[1]<< " ";
		if (x[i]=='C') cout << a[2]<< " ";
	}
	return 0;
}