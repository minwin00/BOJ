#include <iostream>
using namespace std;

int main(void)
{
	int e, f, c;
	int result = 0;
	cin >> e >> f >> c;
	e+= f;
	while (e/c){
		result += e/c;
		e = (e/c) + e%c;
	}
	cout << result;
	return (0);
}