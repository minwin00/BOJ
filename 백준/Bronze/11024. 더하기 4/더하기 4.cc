#include <iostream>
#include <string>
using namespace std;

int main(void)
{
	int n;
	int temp;
	int result = 0;
	int i;
	cin >> n;
	cin.ignore();
	for (int j = 0; j<n; j++)
	{
		string s;
		result = 0;
		i = 0;
		temp = 0;
		getline(cin, s);
		while(s[i]){
			if (s[i] != ' '){
				temp *= 10;
				temp += s[i] - '0';
			}
			else{
				result += temp;
				temp = 0;
			}
			i++;
		}
		result += temp;
		cout << result << "\n";
	}
	return (0);
}