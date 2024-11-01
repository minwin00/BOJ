#include <iostream>
using namespace std;

int main(void){
	int n;
	int a;
	int cnt;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> a;
		cnt = 1;
		for (int j=2; j<=a; j++){
			if (a%j==0){
				cnt++;
			}
		}
		cout << a<< " " << cnt << "\n";
	}
	return 0;
}