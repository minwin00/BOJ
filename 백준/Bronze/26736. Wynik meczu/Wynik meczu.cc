#include <iostream>
using namespace std;

int main(void){
	string s;
	int i=0;
	int a=0, b=0;
	cin >> s;
	
	while (s[i]){
		if (s[i] == 'A') a++;
		else if (s[i] == 'B') b++;
		i++;
	}
	cout << a << " : " << b;
	return 0;
}