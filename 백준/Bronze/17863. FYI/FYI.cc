#include <iostream>
using namespace std;

int main(void){
	string s;
	cin >> s;
	for(int i = 0; i<3; i++){
		if(s[i] != '5'){
			cout << "NO";
			return (0);
		}
	}
	cout << "YES";
	return (0);
}