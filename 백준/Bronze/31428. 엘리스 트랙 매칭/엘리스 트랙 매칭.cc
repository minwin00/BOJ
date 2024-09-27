#include <iostream>
using namespace std;

int main(void){
	int n;
	int cnt = 0;
	cin >> n;
	char a[10001]={0,};
	char b;
	for (int i=0; i<n; i++){
		cin >> a[i];
	}
	cin >> b;
	for (int i=0; i<n; i++){
		if (a[i] == b) cnt ++;
	}
	cout << cnt;
	return 0;
}