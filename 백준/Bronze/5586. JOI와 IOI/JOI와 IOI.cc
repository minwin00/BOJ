#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int i =0, jcnt = 0, icnt = 0;
	while(s[i+2])
	{
		if (s[i] == 'J' && s[i+1] == 'O' && s[i+2] == 'I')
			jcnt ++;
		if (s[i] == 'I' && s[i+1] == 'O' && s[i+2] == 'I')
			icnt ++;
		i++;
	}
	cout << jcnt << "\n" << icnt;
	return (0);
}