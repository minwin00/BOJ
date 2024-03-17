#include <iostream>
using namespace std;

int cal(int a){
	if (a%4 == 0) return a;
	else if(a%4 == 1) return 1;
	else if (a%4 == 2) return a+1;
	else if (a%4 == 3) return 0;
}

int main(void)
{
	int s, f;
	int n;
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> s >> f;
		s = cal(s-1);
		f = cal(f);
		cout << (s^f) << "\n";
	}
}