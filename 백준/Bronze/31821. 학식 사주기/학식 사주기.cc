#include <iostream>
using namespace std;

int main(void){
	int n;
	int a[10]={0,};
	int t;
	int s = 0;
	int m;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> m;
	for (int i=0; i<m; i++){
		cin >>t;
		s += a[t-1];
	}
	cout << s;
	return 0;
}