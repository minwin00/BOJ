#include <iostream>
using namespace std;

int main(void)
{
	int a[10], b[10];
	int ra = 0, rb = 0;
	for (int i = 0; i<10; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i<10; i++)
	{
		cin >> b[i];
	}
	for (int i = 0; i<10; i++)
	{
		if (a[i] < b[i]) rb +=1;
		if (a[i] > b[i]) ra += 1;
	}
	if (ra == rb) cout << "D";
	else if(ra > rb) cout << "A";
	else cout << "B";
	return (0);
}