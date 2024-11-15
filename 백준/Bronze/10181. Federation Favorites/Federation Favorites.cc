#include <iostream>
using namespace std;

int main(void){
	int n, t;
	cin >> n;
	while(n!=-1){
		t = 1;
		for (int i=2; i<=n/2; i++){
			if(n%i==0) t += i;
		}
		if (t==n){
			cout << n << " = 1";
			for (int i=2; i<=n/2; i++){
				if(n%i==0) cout << " + "<< i;
			}
			cout << "\n";
		}
		else cout << n << " is NOT perfect.\n";
		cin >> n;
	}
	return 0;
}