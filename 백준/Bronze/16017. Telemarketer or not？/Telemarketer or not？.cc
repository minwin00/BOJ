#include <iostream>
using namespace std;

int main(void){
	int a[4] ={0,};
	int flag = 0;
	for (int i =0; i<4; i++){
		cin >> a[i];
	}
	if (!(a[0] >= 8)) flag = 1;
	if (!(a[1] == a[2])) flag = 1;
	if (!(a[3] >= 8)) flag = 1;
	if (flag) cout << "answer";
	else cout << "ignore";
	return 0;
}