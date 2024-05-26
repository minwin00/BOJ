#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int t;
	char a,b;
	int res;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		res = 0;
		cin >> t;
		for (int j=  0; j<t; j++)
		{
			cin >> a >> b;
			if (a == 'R'){
				if (b=='S') res+=1;
				else if(b=='P') res -=1;
			}
			else if (a == 'S'){
				if (b=='P') res += 1;
				else if (b=='R') res -= 1;
			}
			else if (a == 'P'){
				if (b=='R') res += 1;
				else if (b=='S') res -= 1;
			}
		}
		if (res > 0) cout << "Player 1\n";
		else if (res <0) cout << "Player 2\n";
		else cout << "TIE\n";
	}
	return (0);
}