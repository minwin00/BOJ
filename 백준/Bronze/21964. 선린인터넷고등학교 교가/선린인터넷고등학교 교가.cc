#include <iostream>
using namespace std;

int main(void){
	int n;
	char c;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> c;
		if (i >= n-5) cout << c;
	}
	return 0;
}