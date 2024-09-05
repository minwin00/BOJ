#include <iostream>
using namespace std;

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int j;
	int cnt;
	string s;
	cin >> n;
	for (int i=0; i<n; i++){
		j = 0;
		cnt = 0;
		cin >> s;
		while(s[j]){
			if (s[j] == 'U') cnt++;
			else if (s[j] == 'D') break;
			j++;
		}
		cout << cnt<<"\n";
	}
	return 0;
}