#include <iostream>
using namespace std;
int main(void)
{
	long long int a;
	cin >> a;
	while (a>1){
		if (a%2== 0)
			a/=2;
		else{
			cout << 0;
			return (0);
		}
	}
	cout << 1;
	return (0);
}