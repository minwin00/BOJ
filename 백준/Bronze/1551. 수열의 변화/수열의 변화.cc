#include <iostream>
using namespace std;

int main(void)
{
	int n, k;
	int temp = 0;
	string s;
	int a[21];
	int flag = 1;
	int i = 0;
	int j = 0;
	cin >> n >> k;
	cin >> s;
	while (s[i])
	{
		if (s[i] == '-') flag =-1;
		else if (s[i] != ',')
		{
			temp *= 10;
			temp += s[i] - '0';
		}
		else {
			a[j] = flag * temp;
			temp = 0;
			flag = 1;
			j++;
		}		
		i++;
	}
	a[j] = flag*temp;
	for (int q=0; q<k; q++){
		for (int w=0; w<n-q; w++){
			a[w] = a[w+1] - a[w];
		}
	}
	for (int q=0; q<n-k; q++){
		cout << a[q];
		if (q != n-k-1) cout << ",";
	}
	return (0);
}