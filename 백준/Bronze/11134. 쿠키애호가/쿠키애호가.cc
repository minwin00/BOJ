#include <iostream>
using namespace std;

int main(void){
	int t;
	int n, c, s;
	cin >>t ;
	for (int i=0; i<t; i++){
		cin >> n >> c;
		s = n/c;
		if (n%c!=0) s++;
		cout << s <<"\n";
	}
	return 0;
}