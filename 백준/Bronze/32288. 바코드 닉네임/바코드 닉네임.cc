#include <iostream>
using namespace std;

int main(void){
	int n;
	int i=0;
	string s;
	cin >> n;
	cin >> s;
	while(s[i]){
		if (s[i] == 'I') cout << 'i';
		else cout << "L";
		i++;
	}
	return 0;
}