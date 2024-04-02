#include <iostream>
using namespace std;

int main(void)
{
	int n;
	int result = 0;
	cin >> n;
	while (n!= -1){
		result += n;
		cin >> n;
	}
	cout << result;
	return (0);
}