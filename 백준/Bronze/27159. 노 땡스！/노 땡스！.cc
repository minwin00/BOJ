#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, t;
	int sum=0;
	t = -1;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		if (t+1 == a){
			t = a;
		}
		else{
			sum += a;
			t = a;
		}
	}
	cout << sum;
	return 0;
}