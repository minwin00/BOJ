#include <iostream>
using namespace std;

int main(void){
	int n;
	int t;
	int l, m, r;
	cin >> n;
	for (int i=0; i<n; i++){
		l=0;
		r=0;
		cin >> t;
		for (int i=0; i<t; i++){
			cin >> m;
			if (m<0) l+=m;
			else if (m>0) r+=m;
		}
		if (l+r >0) cout << "Right\n";
		else if (l+r==0) cout << "Equilibrium\n";
		else cout << "Left\n";
	}
	return 0;
}