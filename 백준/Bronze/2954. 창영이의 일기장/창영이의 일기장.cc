#include <iostream>
using namespace std;

int main(void)
{
	char s[101];
	char c[101];
	int i = 0;
	int flag = 0;
	int j = 0;
	cin.getline(s, 100, '\n');
	while (s[i]){
		if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
			if (flag == 2) flag = 0;
			else {
				c[j++] = s[i];
				flag = 1;
			}
		}
		else if (s[i] == 'p' && flag == 1) flag = 2;
		else {
			c[j++] = s[i];
			flag = 0;
		}
		i++;
	}
	for (int k = 0; k<j; k++){
		cout << c[k];
	}
	return (0);
}