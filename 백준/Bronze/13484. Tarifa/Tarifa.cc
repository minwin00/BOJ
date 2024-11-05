#include <iostream>
using namespace std;

int main(void){
	int x;
	int n;
	int s=0;
	int t;
	cin >> x >> n;
	for (int i=0; i<n; i++){
		cin >> t;
		s+=x-t;
		if (s<0){
			s=0;
		}
	}
	cout << s+x;
	return 0;
}