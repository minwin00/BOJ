#include <iostream>
using namespace std;

int main(void){
	int a[5];
	int b[5];
	for (int i=0; i<5; i++){
		cin >> a[i];
	}
	for (int i=0; i<5; i++){
		cin >> b[i];
	}
	for (int i=0; i<5; i++){
		if (a[i] == b[i]){
			cout << "N";
			return 0;
		}
	}
	cout  << "Y";
	return 0;
}