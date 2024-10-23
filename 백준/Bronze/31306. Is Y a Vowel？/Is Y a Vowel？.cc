#include <iostream>
using namespace std;

int main(void){
	string s;
	int i=0;
	int a= 0, b=0;
	cin >> s;
	while(s[i]){
		if (s[i] == 'a' ||s[i] == 'e'||s[i] == 'i'||s[i] == 'o'||s[i] == 'u'){
			a++;
			b++;
		}
		if (s[i] == 'y') b++;
		i++;
	}
	cout << a << " " << b;
	return 0;
}