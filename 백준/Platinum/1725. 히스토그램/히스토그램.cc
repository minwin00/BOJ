#include <iostream>
#include <vector>
using namespace std;

vector<long long> tree;
int a[100001];
int n;
int s=1;
long long int INF = 1000000001;

void init(){
	for (int i=0; i<n; i++){
		tree[s+i] =i+1;
	}
	for (int i=s-1; i>0; i--){
		a[tree[i*2]] < a[tree[i*2+1]] ? tree[i] = tree[i*2] : tree[i]=tree[i*2+1];
	}
}

long long query(int left, int right, int node, int query_left, int query_right){
	if (right < query_left || query_right <left) return 0;
	else if (query_left <= left && right <= query_right){
		return tree[node];
	}
	else {
		int mid = (left+right)/2;
		int l = query(left, mid, node*2, query_left, query_right);
		int r = query(mid+1, right, node*2+1, query_left, query_right);
		if(a[l]<a[r]) return l;
		else return r;
	}
}

long long solve(int start, int end){
	int min_index =  query(1, s, 1, start, end);
	long long max_area = a[min_index]*(end - start+1);

	if (min_index+1<=end){
		max_area = max(max_area, solve(min_index+1, end));
	}
	if (start<=min_index-1){
		max_area = max(max_area, solve(start, min_index-1));
	}
	return max_area;
}

int main(void){
	cin >> n;
	while (s<n){
		s*=2;
	}
	for (int i=0; i<2*s; i++){
		tree.push_back(0);
	}
	a[0] = INF;
	for (int i=1; i<=n; i++){
		cin >> a[i];
	}
	init();
	cout << solve(1, n);
	return 0;
}