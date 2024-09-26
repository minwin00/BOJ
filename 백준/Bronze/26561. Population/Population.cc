#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	int s;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		s = a;
		s += b/4;
		s-= b/7;
		cout << s << "\n";
	}
	return 0;
}