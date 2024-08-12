#include <iostream>
using namespace std;

//131072
//262144
int n, k;
int arr[100001];
int tree[262145];
int s=1;

void init(){
	for (int i=0; i<n; i++){
		tree[s+i] = 1;
	}
	for (int i = s-1; i>0; i--){
		tree[i] = tree[i*2] + tree[i*2+1];
	}
}

int query(int left, int right, int node, int rank){
	tree[node] --;
	if (left==right) return left;
	int mid = (left+right)/2;
	if (tree[2*node] < rank){
		return query(mid+1, right, node*2+1, rank-tree[2*node]);
	}
	else {
		return query(left, mid, node*2, rank);
	}
}

int main(void){
	int rank;
	int cnt;
	cin >>n >>k;
	while(s<n){
		s*=2;
	}
	init();
	rank =k;
	cnt = n;
	cout << "<";
	for (int i=0; i<n; i++){
		cout << query(1,s, 1,rank);
		cnt--;
		if (cnt) (rank+k-1)%cnt==0?rank = cnt : rank = (rank+k-1)%cnt;
		if (i!=n-1) cout << ", ";
	}
	cout << ">";
	return 0;
}