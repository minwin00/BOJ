#include <iostream>
using namespace std;

int main(void){
	string s;
	cin >> s;
	int i=-1;
	while (s[++i]){
		if (s[i] == 'a') cout << '4';
		else if (s[i] == 'e') cout << '3';
		else if (s[i] == 'i') cout << '1';
		else if (s[i] == 'o') cout << '0';
		else if (s[i] == 's') cout << '5';
		else cout << s[i];
	}
	return 0;
}