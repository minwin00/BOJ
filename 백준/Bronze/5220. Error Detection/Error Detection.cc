#include <iostream>
using namespace std;

int main(void){
	int n;
	int num , c;
	int t, cnt;
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> num >> c;
		cnt = 0;
		while (num){
			if(num%2) cnt++;
			num/=2;
		}
		if (c) cnt++;
		if (cnt%2==0) cout << "Valid\n";
		else cout << "Corrupt\n";
	}
	return 0;
}