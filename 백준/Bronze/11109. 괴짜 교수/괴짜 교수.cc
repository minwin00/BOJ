#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b, c, d;
	int x, y;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b >> c>>d;
		x = a+b*d;
		y = b*c;
		if (x>y) cout << "do not parallelize\n";
		else if (x < y) cout << "parallelize\n";
		else cout << "does not matter\n";
	}
	return 0;
}