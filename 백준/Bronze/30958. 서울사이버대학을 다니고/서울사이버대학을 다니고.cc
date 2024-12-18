#include <iostream>
#include <string>
using namespace std;

int main(void){
	int n;
	int m = 0;
	int a[26]={0,};
	string s;
	cin >> n;
	cin.ignore();
	getline(cin, s);
	for (int i=0; i<n; i++){
		a[s[i] - 'a'] += 1;
	}
	for (int i=0; i<26; i++){
		if (m < a[i]) m= a[i];
	}
	cout << m;
	return 0;
}