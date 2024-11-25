#include <iostream>
using namespace std;

int main(void){
	string s;
	cin >> s;
	int i=0;
	while (s[i]){
		if (!(s[i]=='I'||s[i]=='O'||s[i]=='S'||s[i]=='H'||s[i]=='Z'||s[i]=='X'||s[i]=='N')){
			cout << "NO";
			return 0;
		}
		i++;
	}
	cout << "YES";
	return 0;
}