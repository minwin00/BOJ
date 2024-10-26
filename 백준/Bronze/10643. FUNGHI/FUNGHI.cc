#include <iostream>
using namespace std;

int main(void){
	int a[8]={0,};
	int t;
	int s=0;
	int mx = 0;
	for (int i=0; i<8; i++){
		cin >> a[i];
	}
	
	for (int i=0; i<8; i++){
		s = 0;
		for (int j=0; j<4;j++){
			t = i+j;
			if (t>7){
				t = i+j -8;
			}
			s+=a[t];
		}
		if (s>mx) mx = s;
	}
	cout << mx;
	return 0;
}