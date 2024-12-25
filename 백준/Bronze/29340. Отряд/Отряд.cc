#include <iostream>
using namespace std;

int main(void){
	string a, b;
	int i=0;
	cin >> a >> b;
	while (a[i]){
		if (a[i] > b[i])cout << a[i];
		else cout << b[i];
		i++;
	}
	return 0;
}