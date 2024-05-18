#include <iostream>
using namespace std;

int main(void)
{
	int a, aa;
	int b, bb;
	int c, cc;
	int d;
	int t = 0;
	int ta, tb, tc;
	cin >> a >> aa;
	cin >> b >> bb;
	cin >> c >> cc;
	cin >> d;
	ta = a;
	tb = b;
	tc = c;
	d -= (aa+bb+cc);
	while (d>0){
		ta--;
		tb--;
		tc--;
		if (ta == 0){
			d-= aa;
			ta = a;
		}
		if (tb == 0){
			d-= bb;
			tb = b;
		}
		if (tc == 0){
			d-= cc;
			tc = c;
		}
		t++;
	}
	cout << t;
	return (0);
}