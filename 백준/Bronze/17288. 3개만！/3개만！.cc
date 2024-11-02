#include <iostream>
using namespace std;

int main(void){
	string s;
	cin >> s;
	int i=0;
	int temp=-1;
	int cnt = 0;
	int result = 0;
	while (s[i]){
		if (temp+1 == s[i] -'0'){
			cnt++;
			temp = s[i]-'0';
		}
		else {
			temp = s[i]-'0';
			cnt = 0;
		}
		if(cnt==2) result ++;
		if(cnt==3) result --;
		i++;
	}
	cout << result;
	return 0;
}