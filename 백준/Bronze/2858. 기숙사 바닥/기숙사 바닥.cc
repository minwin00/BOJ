#include <iostream>
using namespace std;

int main(void){
	long long int a, b;
	cin >> a >> b;

	for (long long int i =1; i<=a/2; i++){
		for (long long int j = 1; j<=i; j++){
			if (i*j == a+b && (2*i+2*j-4==a)){
				cout << i << " " << j;
				break;
			}
		}
	}
	return 0;
}