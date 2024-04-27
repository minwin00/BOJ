#include <iostream>
using namespace std;

int main(void)
{
	int n, a, j = 0;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		j = 0;
		cin >> a;
		while (1){
			if (j + j * j > a)
				break;
			j++;
		}
		cout << j - 1 << "\n";
	}
	return (0);
}