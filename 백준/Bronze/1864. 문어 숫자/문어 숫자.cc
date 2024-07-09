#include <iostream>
using namespace std;

int con(char c){
	if (c == '-') return 0;
	if (c == '\\') return  1;
	if (c == '(') return  2;
	if (c == '@') return  3;
	if (c == '?') return  4;
	if (c == '>') return  5;
	if (c == '&') return  6;
	if (c == '%') return  7;
	if (c == '/') return -1;
}

int cal(string s){
	int i =0;
	int temp =0;
	while (s[i++]){
		temp *= 8;
		temp += con(s[i-1]);
	}
	return temp;
}
int main(void){
	string s;
	while (1){
		cin >> s;
		if (s== "#") return 0;
		cout << cal(s) << "\n";
	}
	return 0;
}