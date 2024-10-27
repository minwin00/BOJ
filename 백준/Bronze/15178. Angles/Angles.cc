#include<iostream>
using namespace std;

int main(void){
	int n;
	int a, b, c;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a >> b >> c;
		cout << a << " " << b << " " << c << " ";
		if (a+b+c==180) cout << "Seems OK\n";
		else cout << "Check\n";
	}
	return 0;
}