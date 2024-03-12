#include <iostream>
#include <algorithm>
using namespace std;

int getsum(string s)
{
	int i = 0;
	int res = 0;
	while (s[i]){
		if (s[i] >= '0' && s[i] <= '9')
			res += s[i] - '0';
		i++;
	}
	return res;
}

bool compare(string a, string b){
	if(a.length() < b.length())
		return 1;
	else if (a.length() > b.length())
		return 0;
	else{
		if (getsum(a) < getsum(b))
			return 1;
		else if (getsum(a) > getsum(b))
			return 0;
		else return a < b;
	}
}

int main(void)
{
	int n;
	string s[51];

	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> s[i];
	}
	sort(s, s+n, compare);
	for (int i = 0; i<n; i++)
	{
		cout << s[i] << "\n";
	}
	return (0);
}