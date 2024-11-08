#include <iostream>
using namespace std;

int main(void){
	int n, m, k;
	int a, b=0;
	int cnt = 0;
	cin >> n >> m >> k;
	a = n;
	while (a>b){
		a+=m;
		b+=k;
		cnt++;
	}
	cout << cnt;
	return 0;
}