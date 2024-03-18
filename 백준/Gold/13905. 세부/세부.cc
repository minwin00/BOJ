#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Edge{
	public:
		int node[2];
		int dist;
		Edge(int a, int b, int d)
		{
			this->node[0] = a;
			this->node[1] = b;
			this->dist = d;
		}
		bool operator >(Edge &edge){
			return this->dist > edge.dist;
		}
};

bool compare(Edge &a, Edge &b)
{
	return a > b;
}

int getParent(int p[], int x)
{
	if(p[x] == x) return x;
	return p[x] = getParent(p, p[x]);
}

void unionParent(int p[], int a, int b)
{
	a = getParent(p, a);
	b = getParent(p, b);
	if (a > b) p[a] = b;
	else if (a < b) p[b] = a;
}

int findParent(int p[], int a, int b){
	a = getParent(p, a);
	b = getParent(p, b);
	if (a==b) return 1;
	else return 0;
}

int main(void)
{
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<Edge> v;
	int a, b, d;
	int p[100001] = {0,};
	int n, m;
	int temp;
	int s, e;
	int mmnn = 9999999;
	cin >> n >> m;
	for (int i = 1; i<=n; i++)
	{
		p[i] = i;
	}
	cin >> s >> e;
	for (int i = 1; i<=m; i++)
	{
		cin >> a >> b >> d;
		v.push_back(Edge(a, b, d));
	}
	sort(v.begin(), v.end(), compare);
	for (int i = 0; i<v.size(); i++)
	{
		if (findParent(p, s, e)) break;
		else{
			if (!findParent(p, v[i].node[0], v[i].node[1])){
				unionParent(p, v[i].node[0], v[i].node[1]);
				if (mmnn > v[i].dist){
					mmnn = v[i].dist;
				}
			}
		}
	}
	if (!findParent(p, s, e))
		cout << "0";
	else cout << mmnn;
	return (0);
}