#include <iostream>
using namespace std;

int main(void){
	string s;
	int n;
	string result;
	int mx = 0;
	for (int i=0; i<7; i++){
		cin >> s >> n;
		if (n>mx){
			mx = n;
			result = s;
		}
	}
	cout << result;
	return 0;
}