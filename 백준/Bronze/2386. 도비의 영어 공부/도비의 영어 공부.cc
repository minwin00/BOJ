#include <iostream>
#include <string>
using namespace std;

int main(void){
	char c;
	char t;
	int i;
	int cnt;
	string s;
	while (1){
		cin >> c;
		if (c == '#') return 0;
		if ('a' <= c && c <= 'z') t = c-32;
		else t = c+32;
		cin.ignore();
		getline(cin, s);
		i = 0;
		cnt = 0;
		while(s[i]){
			if (s[i] == t || s[i] == c) cnt++;
			i++;
		}
		cout << c << " " << cnt << "\n";
	}
	return 0;
}