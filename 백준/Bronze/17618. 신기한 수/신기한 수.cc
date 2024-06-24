#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int cnt = 0;
	char s[9];
	cin >> n;
	int t = 0;
	int temp;
	for (int i = 1; i<=n; i++){
		t = 0;
		temp = i;
		while (temp){
			t += temp%10;
			temp /=10;
		}
		if (i%t == 0) cnt++;
	}
	cout << cnt;
	return (0);
}