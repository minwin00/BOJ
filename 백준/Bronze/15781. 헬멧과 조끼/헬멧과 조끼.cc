#include <iostream>
using namespace std;

int main(void){
	int n, m;
	int a, b;
	int t1 =0, t2=0;
	cin >> n >>m;
	for (int i =0; i<n; i++){
		cin >> a;
		if (a > t1) t1 = a;
	}
	for (int i = 0; i<m; i++){
		cin >>b;
		if (b>t2) t2 = b;
	}
	cout << t1+t2;
	return 0;
}