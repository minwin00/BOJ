#include <iostream>
using namespace std;

int main(void){
	int n=8;
	int num;
	int flag = 0;
	for (int i=0; i<n; i++){
		cin >> num;
		if (num>1) flag =1;
	}
	if (flag) cout << "F";
	else cout << "S";
}