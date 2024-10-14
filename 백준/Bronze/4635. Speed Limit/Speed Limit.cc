#include <iostream>
using namespace std;

int main(void){
	int n, a, b, t, s;
	cin >> n;
	while(n!=-1){
		t=0;
		s = 0;
		
		for (int i=0; i<n; i++){
			cin >> a >> b;
			s += a*(b-t);
			t = b;
		}
		cout << s << " miles\n";
		cin >> n;
	}
	return 0;
}