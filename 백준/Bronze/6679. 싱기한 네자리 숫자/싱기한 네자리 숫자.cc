#include <iostream>
using namespace std;
int cal(int i, int d){
	int result = 0;
	while(i){
		result += i%d;
		i/=d;
	}
	return result;
}
int main(void)
{
	int t10, t12, t16;
	for (int i = 1000; i<10000; i++)
	{
		t10 = cal(i, 10);
		t12 = cal(i, 12);
		t16 = cal(i, 16);
		if (t10 == t12 && t12 == t16) cout << i << "\n";
	}
	return (0);
}