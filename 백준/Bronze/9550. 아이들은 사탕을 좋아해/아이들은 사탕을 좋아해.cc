#include <iostream>
using namespace std;

int main(void)
{
	int n;
	cin >> n;
	int a, b, c;
	int result;
	
	for (int l =0; l<n; l++)
	{
		result = 0;
		cin >> a >> b;
		for (int i=0; i<a; i++){
			cin >> c;
			result += c/b;
		}
		cout << result <<"\n";
	}
	return (0);
}