#include <iostream>
using namespace std;

int main(void){
	int a, b, n;
	int res;
	cin >> a >> b >> n;
	res = a*n;
	for (int i=0; i<n; i++){
		res += b;
		cout << res << " ";
	}
	return 0;
}