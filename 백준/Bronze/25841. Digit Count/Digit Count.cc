#include <iostream>
#include <string>
using namespace std;

int main(void){
	int s, e;
	int cnt = 0;
	char c;
	string ss;
	cin >> s >> e>> c;
	for (int i=s; i<=e; i++){
		ss=to_string(i);
		for (int j=0; j<4; j++){
			if (ss[j] == c) cnt++;
		}
	}
	cout << cnt;
	return 0;
}