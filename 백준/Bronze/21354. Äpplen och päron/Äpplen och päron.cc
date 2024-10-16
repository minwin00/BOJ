#include <iostream>
using namespace std;

int main(void){
	int a, b;
	cin >> a >> b;
	a*=7;
	b*=13;
	if (a==b) cout << "lika";
	if (a>b) cout << "Axel";
	if (a<b) cout << "Petra";
	return 0;
}