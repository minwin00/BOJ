#include <iostream>
using namespace std;

int main(void)
{
	int a[3] = {0,};
	int temp;
	string s;
	int i = 0;
	cin >> s;
	
	a[0] = 1;
	while (s[i]){
		if(s[i] == 'A'){
			temp = a[0];
			a[0] = a[1];
			a[1] = temp;
		}
		else if (s[i] == 'B'){
			temp = a[1];
			a[1] = a[2];
			a[2] = temp;
		}
		else if (s[i] == 'C'){
			temp = a[0];
			a[0] = a[2];
			a[2] = temp;
		}
		i++;
	}
	for (int i =0; i<3; i++)
	{
		if(a[i] == 1) cout << i+1;
	}
	return (0);
}