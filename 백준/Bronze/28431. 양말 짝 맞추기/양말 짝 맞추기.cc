#include <iostream>
using namespace std;

int main(void){
	int a[10]={0,};
	int t;
	for (int i=0; i<5; i++){
		cin >> t;
		a[t] +=1;
	}
	for (int i=0; i<10; i++){
		if (a[i]%2==1){
			cout << i;
		}
	}
	return 0;
}