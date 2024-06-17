#include <iostream>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int t, n;
	int a;
	int mx = -1000001, mn = 1000001;
	cin >> t;
	for (int i = 0; i<t; i++){
		cin >> n;
		mx = -1000001;
		mn = 1000001;
		for (int j = 0; j<n; j++){
			cin >> a;
			if (a>mx) mx = a;
			if (a<mn) mn = a;
		}
		cout << mn << " " << mx << "\n";
	}
	return (0);
}