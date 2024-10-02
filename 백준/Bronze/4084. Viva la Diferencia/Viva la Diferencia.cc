#include <iostream>
using namespace std;

int main(void){
	int a, b, c, d, t;
	int cnt;
	cin >> a >> b >> c >> d;
	while(!(a==0 &&b==0 && c==0 && d==0)){
		cnt = 0;
		while (!(a==b &&b==c && c==d && d==a)){
			t = a;
			a = a-b;
			b = b-c;
			c = d-c;
			d = d-t;
			if (a < 0) a*=-1;
			if (b < 0) b*=-1;
			if (c < 0) c*=-1;
			if (d < 0) d*=-1;
			cnt++;
		}
		cout << cnt << "\n";
		cin >> a >> b>> c >> d;
	}
	return 0;
}