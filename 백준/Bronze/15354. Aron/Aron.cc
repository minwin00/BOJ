#include <iostream>
using namespace std;

int main(void){
	int n;
	int cnt=1;
	char c[26];
	cin >> n;
	for (int i=0; i<n; i++){
		cin >> c[i];
		if (i>0){
			if (c[i] != c[i-1]){
				cnt++;
			}
		}
	}
	cout << cnt+1;
	return 0;

}