#include <iostream>
using namespace std;

int main(void){
	int n;
	int t;
	cin >> n;
	while (1){
		int d = 0;
		t = n;
		while(t/10){
			d+=t%10;
			t/=10;
		}
		d+=t;
		if (n%d==0){
			cout << n;
			return 0;
		}
		n++;
	}
	return 0;
}