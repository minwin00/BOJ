#include <iostream>
#include <cstring>
using namespace std;

int main(void){
	int n;
	int j;
	string s;
	cin >> n;
	cin.ignore();
	for (int i=0; i<n; i++){
		getline(cin, s);
		j=0;
		while (s[j]){
			cout << s[j];
			j++;
		}
		if (s[j-1] != '.') cout << ".";
		cout << "\n";
	}
	return 0;
}