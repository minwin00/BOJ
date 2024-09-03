#include <iostream>
using namespace std;

int main(void){
	char c;
	cin >> c;
	int k = c-'I';
	if (k<0) k*=-1;
	cout << k+84;
	return 0;
}