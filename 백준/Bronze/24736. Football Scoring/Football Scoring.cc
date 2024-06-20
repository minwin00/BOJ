#include <iostream>
using namespace std;

int main(void)
{
	int a[5];
	int t;
	for (int i = 0; i<2; i++){
		for (int j=0; j<5; j++){
			cin >> a[j];
		}
		t = a[0] *6 + a[1]*3+a[2]*2+a[3]+a[4]*2;
		cout << t << " ";
	}
	return (0);
}