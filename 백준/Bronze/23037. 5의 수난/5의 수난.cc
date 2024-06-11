#include <iostream>
using namespace std;

int main(void)
{
	string s;
	cin >> s;
	long long int r = 0;
	int t;
	for (int i = 0; i<5; i++){
		t = s[i]- '0';
		r += t*t*t*t*t;
	}
	cout << r;
	return (0);
}