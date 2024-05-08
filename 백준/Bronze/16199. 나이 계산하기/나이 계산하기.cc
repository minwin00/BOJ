#include <iostream>
using namespace std;

int main(void)
{
	int a1, a2, a3;
	int b1, b2, b3;
	cin >> a1 >> a2 >> a3;
	cin >> b1 >> b2 >> b3;
	int c1, c2, c3;
	c1=b1-a1;
	c2=b2-a2;
	c3=b3-a3;
	if (c2 >0 || (c2 == 0 && c3 >=0)){
		cout << c1<< "\n";
	}
	else cout << c1-1 << "\n";
	cout << c1+1<<"\n";
	cout << c1<< "\n";
}