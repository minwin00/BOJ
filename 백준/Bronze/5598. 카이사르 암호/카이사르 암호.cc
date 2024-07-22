#include <iostream>
using namespace std;

int main(void){
	string s;
	char c;
	int i=0;
	cin >> s;
	while (s[i]){
		if ('A'>s[i]-3){
			c = 'Z'-'C' + s[i];
		}
		else c = s[i] - 3;
		cout << c;
		i++;
	}
	return 0;
}