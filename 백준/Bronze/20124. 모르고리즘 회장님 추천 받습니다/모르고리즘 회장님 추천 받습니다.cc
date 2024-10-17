#include <iostream>
using namespace std;

int main(void){
	int n;
	string r, a;
	int mx, b;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b;
		if (i==0){
			mx = b;
			r = a;
		}
		if (b > mx){
			mx = b;
			r = a;
		}
		if (b==mx){
			if (r > a){
				r = a;
			}
		}
	}
	cout << r;
	return 0;
}