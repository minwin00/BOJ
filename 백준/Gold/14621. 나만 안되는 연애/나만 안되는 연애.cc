#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n, m;
char wm[1001];

int getParent(int a, int p[]){
	if (a == p[a]) return a;
	return p[a] = getParent(p[a], p);
}

int findParent(int a, int b, int p[])
{
	a = getParent(a, p);
	b = getParent(b, p);
	if (a == b) return 1;
	return (0);
}

void unionParent(int a, int b, int p[])
{
	a = getParent(a, p);
	b = getParent(b, p);
	if (a > b) p[a] = b;
	else p[b] = a;
}

bool compare(pair<int, pair<int, int>> a, pair<int, pair<int, int>>b){
	return a.first < b.first;
}

int main(void)
{
	int a,b,c;
	int p[1001];
	int result = 0;
	int temp;

	vector<pair<int, pair<int, int> > > v;
	cin >> n >> m;
	for (int i = 1; i<=n; i++)
	{
		p[i] = i;
		cin >> wm[i];
	}
	for (int i = 0; i<m; i++)
	{
		cin >> a >> b >> c;
		v.push_back(make_pair(c, make_pair(a, b)));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0 ; i<m; i++)
	{
		if(!findParent(v[i].second.first, v[i].second.second, p))
		{
			if (wm[v[i].second.first] != wm[v[i].second.second])
			{
				unionParent(v[i].second.first, v[i].second.second, p);
				result += v[i].first;
			}
		}
	}
	temp = getParent(1, p);
	for (int i = 2; i<=n; i++)
	{
		if (temp != getParent(i, p))
		{
			cout << "-1";
			return (0);
		}
	}
	cout << result;
	return (0);
}