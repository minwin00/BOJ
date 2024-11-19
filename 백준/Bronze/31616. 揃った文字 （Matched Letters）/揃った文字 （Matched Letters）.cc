#include <iostream>
using namespace std;

int main(void){
	int n;
	string s;
	char c;
	cin >> n;
	cin >> s;
	c = s[0];
	for (int i=1; i<n; i++){
		if (c != s[i]) {
			cout << "No";
			return 0;
		}
	}
	cout << "Yes";
	return 0;
}