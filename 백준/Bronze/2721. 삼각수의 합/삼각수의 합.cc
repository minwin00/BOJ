#include <iostream>
using namespace std;

int main(void)
{
	int t;
	int n;
	int res;
	cin >> t;
	for (int i = 0; i<t; i++){
		cin >> n;
		res=0;
		for (int j=1;j<=n;j++){
			res += (j+2)*(j+1)*j/2;
		}
		cout <<res << "\n";
	}
	return (0);
}