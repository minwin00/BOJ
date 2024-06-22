#include <iostream>
using namespace std;

int main(void)
{
	int a;
	int i = 0;
	int result = 0;
	string s;
	cin >> a;
	cin.ignore();
	cin >> s;
	while(s[i]){
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
			result ++;
		i++;
	}
	cout << result;
}