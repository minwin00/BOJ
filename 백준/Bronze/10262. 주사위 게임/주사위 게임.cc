#include <iostream>
using namespace std;

int main(void){
	int a[4] ={0,};
	int b[4] = {0,};
	int aa = 0, bb=0;
	for (int i=0; i<4; i++){
		cin >> a[i];
		aa+=a[i];
	}
	for (int i=0; i<4; i++){
		cin >> b[i];
		bb+=b[i];
	}
	if (aa > bb) cout << "Gunnar";
	else if (aa<bb) cout << "Emma";
	else cout << "Tie";
	return 0;
}