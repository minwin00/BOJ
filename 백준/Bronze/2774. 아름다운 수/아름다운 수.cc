#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int cnt = 0, i = 0;
	int a[10] = {0,};
	string s;
	cin >> n;
	for (int k = 0; k<n; k++)
	{
		cin >>s;
		i = 0;
		cnt = 0;
		for (int j = 0; j<10; j++) a[j] = 0;
		while (s[i]){
			a[s[i] - '0'] = 1;
			i++;
		}
		for (int j = 0; j<10; j++){
			if (a[j] == 1) cnt ++;
		}
		cout << cnt << "\n";
	}
	return (0);
}