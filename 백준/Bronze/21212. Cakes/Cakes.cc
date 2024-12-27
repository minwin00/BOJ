#include <iostream>
using namespace std;

int main(void){
	int n;
	cin >> n;
	int a, b;
	int m=99999999;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		if (m>b/a) m = b/a;
	}
	cout << m;
	return 0;
}