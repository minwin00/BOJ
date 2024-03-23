#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int u;
	int cnt = 0;
	int result = 0;
	cin >> n;
	for (int i = 0 ; i<n; i++)
	{
		cin >> u;
		if (u == cnt){
			cnt ++;
			result += 1;
			if (cnt == 3) cnt = 0;
		}
	}
	cout << result;
	return (0);
}