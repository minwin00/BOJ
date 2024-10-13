#include <iostream>
using namespace std;

int main(void){
	int n;
	string s;
	int a, b;
	int j;
	cin >> n;
	for (int i=0; i<n; i++){
		j=0;
		cin >> s;
		cin >> a >> b;
		while (s[j]){
			if (!(j>=a && j<b)){
				cout << s[j];
			}
			j++;
		}
		cout << "\n";
	}
	return 0;
}