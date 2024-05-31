#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int i = 1;
	int res = 0;

	while ( i * i <= n ){
		res += n/i-(i-1);
		i++;
	}
	cout << res;
	return (0);
}