#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	int i = 0;
	while (s[i]){
		i++;
	}
	while (i>0){
		cout << s[--i];
	}
	return (0);
}