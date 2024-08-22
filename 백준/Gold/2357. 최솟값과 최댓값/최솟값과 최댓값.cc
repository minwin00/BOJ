#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int s = 1;
vector<int> tree_mn;
vector<int> tree_mx;
int arr[100001];

void init(){
	for (int i=0; i<n; i++){
		tree_mn[s+i] = arr[i];
		tree_mx[s+i] = arr[i];
	}
	for (int i=s-1; i>0; i--){
		tree_mn[i] = min(tree_mn[2*i], tree_mn[2*i+1]);
		tree_mx[i] = max(tree_mx[2*i], tree_mx[2*i+1]);
	}
}

int query_mn(int left, int right, int node, int query_left, int query_right){
	if (right < query_left || query_right < left) return 1000000001;
	else if (query_left <= left && right <= query_right){
		return tree_mn[node];
	}
	else{
		int mid = (left+right)/2;
		return min(query_mn(left,mid,node*2,query_left, query_right), query_mn(mid+1,right,node*2+1,query_left,query_right));
	}
}

int query_mx(int left, int right, int node, int query_left, int query_right){
	if (right < query_left || query_right < left) return -1;
	else if (query_left <= left && right <= query_right){
		return tree_mx[node];
	}
	else{
		int mid = (left+right)/2;
		return max(query_mx(left,mid,node*2,query_left, query_right), query_mx(mid+1,right,node*2+1,query_left,query_right));
	}
}

int main(void){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int a, b;
	cin >> n >>m;
	while (s<n){
		s*=2;
	}
	for (int i=0; i<2*s; i++){
		tree_mn.push_back(1111111111);
		tree_mx.push_back(0);
	}
	for (int i=0; i<n; i++){
		cin >>arr[i];
	}
	init();
	for (int i=0; i<m; i++){
		cin >> a >> b;
		cout <<query_mn(1, s, 1, a, b) << " ";
		cout <<query_mx(1, s, 1, a, b) << "\n";
	}
	return 0;
}