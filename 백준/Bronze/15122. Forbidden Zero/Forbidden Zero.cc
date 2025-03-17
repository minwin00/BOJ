#include <iostream>
#include <string>
using namespace std;

int main(void){
	int n;
	int i=0;
	string s;
	cin >> n;
	n+=1;
	s = to_string(n);
	while (s[i]){
		if (s[i] == '0') s[i] = '1';
		i++;
	}
	cout << s;
	return 0;
}