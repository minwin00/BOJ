#include <iostream>
using namespace std;

int main(void){
	int n;
	int cnt = 0;
	cin >> n;
	for (int i=0; i<=99; i++){
		for (int j=0; j<=99;j++){
			if (i+j==n)cnt++;
		}
	}
	cout << cnt;
	return 0;
}