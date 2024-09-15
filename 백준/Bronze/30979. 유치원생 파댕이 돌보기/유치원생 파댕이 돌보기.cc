#include <iostream>
using namespace std;

int main(void){
	int a, b, c, d=0;
	cin >> a >> b;
	for (int i=0; i<b; i++){
		cin >> c;
		d+= c;
	}
	if (a<=d) cout << "Padaeng_i Happy";
	else cout << "Padaeng_i Cry";
}