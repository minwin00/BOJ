#include <iostream>
using namespace std;

int main(void)
{
	int a;
	int result = 0;
	cin >> a;
	int cnt = 1;
	int ta = a;
	while (cnt <= a){
		if (ta%2) result ++;
		ta /=2;
		cnt*=2;
	}

	cout << result;
	return (0);
}