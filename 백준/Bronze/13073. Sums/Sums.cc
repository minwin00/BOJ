#include <iostream>
using namespace std;

int main(void){
	int n;
	int t;
	long long s;
	cin >> t;
	for (int i=0; i<t; i++){
		cin >> n;
		s=0;
		for (int j=1; j<=n; j++){
			s+=j;
		}
		cout << s<< " ";
		s=0;
		for (int j=1; j<=2*n; j+=2){
			s+=j;
		}
		cout << s<< " ";
		s=0;
		for (int j=2; j<=2*n; j+=2){
			s+=j;
		}
		cout << s<< "\n";
	}
	return 0;
}