#include <iostream>
using namespace std;

int main(void)
{
	int n;
	string s;
	cin >> n;
	cin >> s;
	int i = 0;
	int a = 0, b = 0;
	while(s[i]){
		if(s[i] == 'A') a++;
		else b++;
		i++;
	}
	if (a==b) cout << "Tie";
	else if (a > b) cout << "A";
	else cout << "B";
	return (0);
}