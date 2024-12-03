#include <iostream>
using namespace std;

int main(void){
	int a, b;
	char c, d;
	cin >> a >> b;
	for (int i=0; i<a; i++){
		if (i%2){
			c='*';
			d='.';
		}
		else {
			c='.';
			d='*';
		}
		for (int j=0; j<b; j++){
			if(j%2) cout << c;
			else cout << d;
		}
		cout << "\n";
	}
	return 0;
}