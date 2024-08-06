#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int n;
int s=1;
vector<int> a;
unordered_map<int, int> b;
vector<long long> tree;

long long query(int left, int right, int node, int query_left, int query_right){
	if (query_right < left || right < query_left) return 0;
	else if (query_left <= left && right <= query_right) return tree[node];
	else {
		int mid = (left+right)/2;
		return query(left, mid, node*2, query_left, query_right) + query(mid+1, right, node*2+1, query_left, query_right);
	}
}

void update(int left, int right, int node, int q){
	if (q<left || right <q) return;
	else {
		tree[node] ++;
		if (left!=right){
			int mid = (left+right)/2;
			update(left, mid, node*2, q);
			update(mid+1, right, node*2+1, q);
		}
	}
}

int main(void){
	int temp;
	long long result = 0;

	cin >> n;
	while (s<n){
		s*=2;
	}
	for (int i=0; i<2*s; i++){
		tree.push_back(0);
	}
	a.push_back(0);
	for (int i=0; i<n; i++){
		cin >>temp;
		a.push_back(temp);
	}
	for (int i=1; i<=n; i++){
		cin >> temp;
		b.insert({temp, i});
	}
	for (int i=1; i<=n; i++){
		if (b[a[i]] != n) result += query(1,s,1,b[a[i]]+1,n);
		update(1,s,1, b[a[i]]);
	}
	cout << result;
}