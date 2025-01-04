#include <iostream>
using namespace std;

int main(void){
	int n, p, t;
	int r;
	cin >> n >> p;
	while (!(n==0 && p==0)){
		r = 0;
		for (int i=0; i<n; i++){
			cin >> t;
			if (t >= p/n){
				r+=p/n;
			}
			else r+=t;
		}
		cout << r<<"\n";
		cin >> n >> p;
	}
	return 0;
}