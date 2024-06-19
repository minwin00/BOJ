#include <iostream>
using namespace std;

int main(void)
{
	string a;
	string b;
	char c[16];
	int cnt = 8;
	int temp;
	cin >> a >> b;
	for (int i = 0; i<8; i++){
		c[2*i] = a[i];
		c[2*i+1] = b[i];
	}
	for (int i = 16; i>2; i--){
		for (int j = 0; j<i-1; j++){
			temp = c[j] -'0' + c[j+1] - '0';
			if (temp > 9) c[j] = temp -10 + '0';
			else c[j] = temp + '0';
		}
	}
	cout << c[0] << c[1];
	return (0);
}