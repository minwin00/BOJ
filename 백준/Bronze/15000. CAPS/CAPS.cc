#include <iostream>
using namespace std;
int main(void)
{
	string s;
	char a;
	cin >> s;
	int i = 0;
	while (s[i])
	{
		a = s[i] - 32;
		cout << a;
		i++;
	}
	return (0);
}