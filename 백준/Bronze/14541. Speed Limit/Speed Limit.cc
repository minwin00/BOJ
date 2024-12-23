#include <iostream>
using namespace std;

int main(void){
	int n;
	int a, b;
	int cnt;
	int tot;
	cin >> n;
	while (n!= -1){
		cnt = 0;
		tot = 0;
		for (int i=0; i<n; i++){
			cin >> a >> b;
			tot += a*(b-cnt);
			cnt =b;
		}
		cout << tot << " miles\n";
		cin >> n;
	}
	return 0;
}