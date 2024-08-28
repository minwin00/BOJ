#include <iostream>
using namespace std;

int len = 100000;
char c[100001];
void print_s(char *c){
	for (int i=0; i<len; i++){
		cout << c[i];
	}
	cout << "\n";
}
int main(void){
	string a, b;
	int temp=0;
	cin >> a >> b;
	for (int i=len-1; i>=0; i--){
		if (b[i] == a[i] && b[i] == '1') c[i] = '1';
		else c[i] = '0';
	}
	print_s(c);

	for (int i=len-1; i>=0; i--){
		if (a[i] =='1' || b[i] == '1') c[i] = '1';
		else c[i] = '0';
	}
	print_s(c);

	for (int i=len-1; i>=0; i--){
		if (a[i] == b[i]) c[i] = '0';
		else c[i] = '1';
	}
	print_s(c);

	for (int i=len-1; i>=0; i--){
		if (a[i] =='1') c[i] = '0';
		else c[i] = '1';
	}
	print_s(c);

	for (int i=len-1; i>=0; i--){
		if (b[i] == '1') c[i] = '0';
		else c[i] = '1';
	}
	print_s(c);
	return 0;	
}