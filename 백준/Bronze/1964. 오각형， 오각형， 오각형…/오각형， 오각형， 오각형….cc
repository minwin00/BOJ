#include <iostream>
using namespace std;

int main(void){
	int n;
	long long int temp = 5;
	cin >> n;
	for (int i = 2; i<=n; i++)
	{
		temp += 3*i + 1;
		temp %= 45678;
	}
	cout << temp;
	return (0);
}