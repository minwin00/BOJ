#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int a, b;
	int cnt = 0;
	cin >>n;
	for (int i =1; i<501; i++){
		b = i*i;
		for (int j = i; j<501; j++){
			a=j*j;
			if(b+n == a) cnt++;
			if (b+n < a) break;
		}
	}
	cout << cnt;
	return (0);
}