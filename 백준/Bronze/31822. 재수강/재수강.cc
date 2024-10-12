#include <iostream>
using namespace std;

int main(void){
	string s;
	string t;
	int n;
	int cnt = 0;
	int flag;
	cin >> s;
	cin >> n;
	for (int j=0; j<n; j++){
		flag = 0;
		cin >> t;
		for (int i=0; i<5; i++){
			if (s[i] != t[i]) flag = 1;
		}
		if (!flag) cnt++;
	}
	cout << cnt;
	return 0;
}