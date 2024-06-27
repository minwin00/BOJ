#include <iostream>
using namespace std;

int main(void)
{
	int a, b, c;
	int result = 0;
	int ans;
	int t[81] ={0,};
	cin >> a >> b >> c;
	for (int i = 1; i<=a; i++){
		for (int j = 1; j<=b; j++){
			for (int k=1; k<=c; k++){
				t[i+j+k] += 1;
			}
		}
	}
	for (int i = 1; i<81; i++){
		if (result < t[i]) {
			result = t[i];
			ans = i;
		}
	}
	cout << ans;
	return 0;
}