#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
	int a;
	int t[3];
	int temp;
	vector<int> v;
	for (int i = 0; i<3; i++)
	{
		cin >> a;
		v.push_back(a);
	}
	sort(v.begin(), v.end());
	t[0] = v[1] - v[0];
	t[1] = v[2] - v[1];
	t[2] = v[2] - v[0];
	if (t[0] == t[1]) cout <<v[2] + t[0];
	else if (t[1] == 2*t[0]) cout << v[1] + t[0];
	else cout << v[0] + t[1];
	return (0);
}