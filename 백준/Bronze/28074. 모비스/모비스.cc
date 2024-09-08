#include <iostream>
using namespace std;

int main(void){
	string s;
	int a[27] ={0,};
	cin >> s;
	int j=0;
	while (s[j]){
		a[s[j]-'A'] =1;
		j++;
	}
	if (a['M'-'A'] == 0) {
		cout << "NO";
		return 0;
	}
	if (a['O'-'A'] == 0) {
		cout << "NO";
		return 0;
	}
	if (a['B'-'A'] == 0) {
		cout << "NO";
		return 0;
	}
	if (a['I'-'A'] == 0) {
		cout << "NO";
		return 0;
	}
	if (a['S'-'A'] == 0) {
		cout << "NO";
		return 0;
	}
	cout << "YES";
	return 0;
}