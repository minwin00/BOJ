#include <iostream>
using namespace std;

int main(void)
{
	string s = "CAMBRIDGE";
	string sin;
	int i = 0;
	int j = 0;
	int flag =0;

	cin >> sin;
	while (sin[i])
	{
		flag = 0;
		j = 0;
		while (s[j])
		{
			if(sin[i] == s[j])
				flag = 1;
			j++;
		}
		if (!flag)
			cout << sin[i];
		i++;
	}
	return (0);
}