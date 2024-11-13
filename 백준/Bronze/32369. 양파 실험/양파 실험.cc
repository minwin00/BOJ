#include <iostream>
using namespace std;

int main(void){
	int n, a, b;
	int t;
	cin >> n >> a >> b;
	int x=1, y=1;
	for (int i=0; i<n; i++){
		x+=a;
		y+=b;
		if (x<y){
			t = x;
			x = y;
			y = t;	
		}
		if (x==y){
			y--;
		}
	}
	cout << x << " " << y;
	return 0;
}