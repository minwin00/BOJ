#include <iostream>
#include <map>
using namespace std;

int main(void)
{
	cin.tie(NULL);
    ios_base::sync_with_stdio(false);

	int a, b;
	map<string, int> m;
	map<int, string> s;
	string quest;
	int temp;
	int num;

	cin >> a >> b;
	
	for (int i = 0; i<a; i++)
	{
		cin >> quest;
		s.insert(make_pair(i, quest));
		m.insert(make_pair(quest, i));
	}
	for (int i = 0; i<b; i++)
	{
		cin >> quest;
		if ((quest[0] >= '0') && (quest[0] <= '9'))
		{
			temp = 0;
			num = 0;
			while (quest[temp])
			{
				num *= 10;
				num += quest[temp] - '0';
				temp++;
			}
			cout << s[num - 1] << "\n";
		}
		else
			cout << m[quest] + 1 << "\n";
	}
	return (0);
}
