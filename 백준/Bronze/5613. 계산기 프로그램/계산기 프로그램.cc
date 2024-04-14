#include <iostream>
using namespace std;

int main(void)
{
	long long int r;
	char op;
	int i = 0;
	int num;
	cin >> r;
	while (1)
	{
		if (i % 2 == 0)
		{
			cin >> op;
			if (op == '='){
				cout << r;
				break;
			}
		}
		else{
			cin >> num;
			if (op == '/') r /= num;
			if (op == '*') r *= num;
			if (op == '+') r += num;
			if (op == '-') r -= num;
		}
		i++;
	}
	return (0);
}