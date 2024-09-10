#include <iostream>
using namespace std;

int main(void){
	int a, b, c, d;
	int t;
	int cnt;
	cin >> a >> b >> c >> d;
	for(int i=0; i<3; i++){
		cin >> t;
		cnt =0;
		if ((t%(a+b))<=a && (t%(a+b))>0) cnt++;
		if ((t%(c+d))<=c && (t%(c+d))>0) cnt++;
		cout << cnt << "\n";
	}
	return 0;
}
