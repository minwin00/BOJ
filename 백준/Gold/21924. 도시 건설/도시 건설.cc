#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge{
	public:
		int node[2];
		int distance;
		Edge(int a, int b, int distance){
			this->node[0] = a;
			this->node[1] = b;
			this->distance = distance;
		}
		bool operator <(Edge &edge){
			return this->distance < edge.distance;
		}
};

int getParent(int parent[], int x)
{
	if(parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

int notSameParent(int parent[], int a, int b)
{
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a == b) return 0;
	else return 1;
}

void unionParent(int parent[], int a, int b)
{
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a<b) parent[b] = parent[a];
	else parent[a] = parent[b];
}

int main(void)
{
	int n, m;
	int a, b, d;
	int p[100001];
	long long int sum = 0;
	long long int maxsum = 0;
	int flag = 0;
	vector<Edge> v;
	cin >> n >> m;
	for (int i = 1; i<=n; i++)
	{
		p[i] = i;
	}
	for (int i = 0; i<m; i++)
	{
		cin >> a >> b >> d;
		v.push_back(Edge(a,b,d));
		maxsum += d;
	}
	sort(v.begin(), v.end());
	for (int i = 0; i<v.size(); i++)
	{
		if (notSameParent(p, v[i].node[0], v[i].node[1]))
		{
			unionParent(p, v[i].node[0], v[i].node[1]);
			sum += v[i].distance;
			flag += 1;
		}
	}
	if (flag != n - 1) cout << "-1";
	else cout << maxsum - sum;
	return (0);
}