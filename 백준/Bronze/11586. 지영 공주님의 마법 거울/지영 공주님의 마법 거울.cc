#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int t;
	string s[101];
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> s[i];
	}
	cin >> t;
	if (t == 2) {
		for (int i = 0; i<n; i++)
		{
			for (int j = 1; j<=n; j++)
			{
				cout << s[i][n - j];
			}
			cout << "\n";
		}
	}
	else if (t == 3){
		for (int j = n-1; j>=0; j--)
		{
			cout << s[j]<< "\n";
		}
	}

	else {
		for (int i = 0; i<n; i++)
		{
			cout << s[i] << "\n";
		}
	}
	return (0);
}