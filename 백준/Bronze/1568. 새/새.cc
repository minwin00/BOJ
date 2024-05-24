#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int c = 1;
	int result = 0;
	while (n>0){
		if (n >= c){
			n-=c;
			result++;
			c++;
		}
		else{
			c=1;
		}
	}
	cout << result;
	return (0);
}