#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	string s;
	getline(cin, s);
	if (s[0]-'0' + s[4] -'0' == s[8] - '0')
		cout << "YES";
	else cout << "NO";
	return (0);
}