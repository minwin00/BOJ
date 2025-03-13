#include <iostream>
using namespace std;

int main(void){
	int n;
	int i = 0, j = 0, o = 0;
	string s;
	cin >> n >> s;
	for (int k=0; k<n; k++){
		if (s[k] == 'J') j++;
		if (s[k] == 'I') i++;
		if (s[k] == 'O') o++;
	}
	for (int k=0; k<j; k++){
		cout << "J";
	}
	for (int k=0; k<o; k++){
		cout << "O";
	}
	for (int k=0; k<i; k++){
		cout << "I";
	}
	return 0;
}