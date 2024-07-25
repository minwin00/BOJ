#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Edge{
	public:
		int n[2];
		int d;
		Edge(int a, int b, int d){
			this->n[0] = a;
			this->n[1] = b;
			this->d = d;
		}
		bool operator<(Edge edge){
			return this->d < edge.d;
		}
};

int getParent(int parent[], int x){
	if (parent[x] == x) return x;
	return parent[x] = getParent(parent, parent[x]);
}

void unionParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	(a>b) ? parent[a] = b : parent[b] = a;
}

int findParent(int parent[], int a, int b){
	a = getParent(parent, a);
	b = getParent(parent, b);
	if (a==b) return 1;
	return 0;
}

int main(void){
	int n, t;
	int a, b, d;
	int res = 0;
	vector<Edge> v;
	int parent[1001] ={0,};
	cin >> n >>t;
	for (int i =0; i<t; i++){
		cin >> a >> b >> d;
		v.push_back(Edge(a,b,d));
	}
	sort(v.begin(), v.end());
	for (int i =1; i<=n; i++){
		parent[i] = i;
	}
	for (int i = 0; i<v.size(); i++){
		if (!findParent(parent, v[i].n[0], v[i].n[1])){
			res += v[i].d;
			unionParent(parent, v[i].n[0], v[i].n[1]);
		}
	}
	cout << res;
	return 0;
}