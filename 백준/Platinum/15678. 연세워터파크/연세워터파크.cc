#include <iostream>
#include <vector>
using namespace std;

vector<long long> tree;
int a[100001];
int s =1;
int n, d;

void update(int left, int right, int node, int target, long long value){
	if (target <left || right <target) return;
	else{
		tree[node] = max(tree[node], value);
		if (left!=right){
			int mid = (left+right)/2;
			update(left, mid, node*2, target, value);
			update(mid+1, right, node*2+1, target, value);
		}
	}
}

long long query(int left, int right, int node, int query_left, int query_right){
	if (query_right<left || right < query_left) return 0;
	else if (query_left <= left && right <= query_right) return tree[node];
	else {
		int mid = (left+right)/2;
		return max(query(left, mid, node*2, query_left, query_right), query(mid+1, right, node*2+1, query_left, query_right));
	}
}
main(void){
	long long temp;

	long long ans;
	cin >> n >> d;
	while (s<n){
		s*=2;
	}
	for (int i=0; i<2*s; i++){
		tree.push_back(0);
	}
	for (int i=1; i<=n;	i++){
		cin >> a[i];
	}
	ans = a[1];
	for (int i=1; i<=n; i++){
		temp = query(1,s,1,max(i-d, 0), i-1);
		ans = max(ans, temp +a[i]);
		update(1,s,1,i,temp+a[i]);
	}
	cout << ans;
	return 0;
}