#include <iostream>

using namespace std;

int main(void)
{
	string b;
	int c1 = 0;
	int c2 = 0;
	int res =0;
	cin >> b;
	int i =0;
	while (b[i])
	{
		if (b[i] == '(')
		{
			c1++;
			c2++;
		}
		else {
			if (i>1 && b[i-1] == '(')
				res += (c1 + c2 -2);
			c1--;
			c2=0;
		}
		i++;
	}
	cout << res;
	return 0;
}