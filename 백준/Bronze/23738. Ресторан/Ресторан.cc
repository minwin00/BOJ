#include <iostream>
using namespace std;

int main(void){
	string s;
	cin >> s;
	int i=-1;
	while (s[++i]){
		if(s[i] == 'B'){
			cout << 'v';
		}
		else if(s[i] == 'E'){
			cout << "ye";
		}
		else if(s[i] == 'H'){
			cout << 'n';
		}
		else if(s[i] == 'P'){
			cout << 'r';
		}
		else if(s[i] == 'C'){
			cout << 's';
		}
		else if(s[i] == 'Y'){
			cout << 'u';
		}
		else if(s[i] == 'X'){
			cout << 'h';
		}
		else{
			char a = s[i] +32;
			cout << a;
		}
	}
	return 0;
}