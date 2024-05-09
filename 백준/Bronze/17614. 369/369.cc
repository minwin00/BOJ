#include <iostream>
using namespace std;

int cal (int i){
	int cnt = 0;
	while (i>0)
	{
		if (i%10 == 3 || i%10 == 6 || i%10 == 9)cnt ++;
		i/=10;
	}
	return cnt;
}

int main(void)
{
	int n;
	int result = 0;
	cin >> n;
	for (int i = 1; i<=n; i++)
	{
		result += cal(i);
	}
	cout << result;
	return (0);
}